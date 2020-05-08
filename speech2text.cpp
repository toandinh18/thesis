#include "speech2text.h"

speech2text::speech2text()
{

}

void speech2text::configSTT()
{
    //config audio input audio format
    //QAudioInput *audio;
    QAudioFormat format;
    // Set up the desired format, for example:
    format.setSampleRate(44100);
//    format.setChannelCount(1);
    format.setSampleSize(16);
    format.setCodec("audio/pcm");
    format.setByteOrder(QAudioFormat::LittleEndian);
    format.setSampleType(QAudioFormat::SignedInt);
    QAudioDeviceInfo info = QAudioDeviceInfo::defaultInputDevice();
    if (!info.isFormatSupported(format)) {
        qWarning() << "Default format not supported, trying to use the nearest.";
        format = info.nearestFormat(format);
    }
    //audio = new QAudioInput(format, this);
    qDebug() << info.deviceName();
    // create configuration object
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
    if((ad = ad_open_dev("USB-Audio", 44100)) == nullptr) {
        qDebug() << "Faile to open audio device";
    }
    qDebug() << "finish_open_dv";
    if(ad_start_rec(ad) <0 )
        qDebug() << "Failed to start recording";
    if(ps_start_utt(ps) < 0)
        qDebug() << "Failed to start utterance\n";
    utt_started = FALSE;
    qDebug() << "Ready...";
}
