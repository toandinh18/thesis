#ifndef NETWORK_FIREBASE_H
#define NETWORK_FIREBASE_H

#include <QMainWindow>
#include <QObject>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QScriptValueIterator>
#include <QtScript/QScriptEngine>
class Network_firebase : public QObject
{
    Q_OBJECT
public:
    QNetworkReply *currentReply;
    Network_firebase();

signals:

public slots:
    void onResult(QNetworkReply* reply);
};

#endif // NETWORK_FIREBASE_H
