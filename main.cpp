#include "mainwindow.h"
#include "include.h"
#include <network_firebase.h>
#include <QApplication>
#include <QNetworkAccessManager>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

