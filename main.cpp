#include "mainwindow.h"
#include "include.h"
#include <network_firebase.h>
#include <QApplication>
#include <QNetworkAccessManager>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    ps_decoder_t *ps = nullptr;
    cmd_ln_t *config = nullptr;
    config = cmd_ln_init(nullptr, ps_args(), TRUE,
                 "-hmm", MODELDIR "/en-us/en-us",
                     "-lm", MODELDIR "/en-us/en-us.lm.bin",
                     "-dict", MODELDIR "/en-us/cmudict-en-us.dict",
                     nullptr);
    if (config == nullptr) {
        qDebug() << stderr << "Failed to create config object, see log for details\n";
    }
    // recognise from microphone

    ps_default_search_args(config);
    ps = ps_init(config);
    if (ps == nullptr) {
        cmd_ln_free_r(config);
    }
    //alsa_input.pci-0000_00_1f.3.analog-stereo
    ad_rec_t *ad;
    int16 adbuf[2048];
    uint8 utt_started, in_speech;
    int32 k;
    char const *hyp;
    qDebug() << "start_open_dv";
    //USB PnP Sound Devices
    if((ad = ad_open_dev("plughw:1,0",
                         8000)) == nullptr) {
        qDebug() << "Faile to open audio device";
    }
    qDebug() << "finish_open_dv";
    if(ad_start_rec(ad) <0 )
        qDebug() << "Failed to start recording";
    if(ps_start_utt(ps) < 0)
        qDebug() << "Failed to start utterance\n";
    utt_started = FALSE;
    qDebug() << "Ready...";
    //w.show();
    return a.exec();
}

