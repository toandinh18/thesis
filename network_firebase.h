#ifndef NETWORK_FIREBASE_H
#define NETWORK_FIREBASE_H

#include <QMainWindow>
#include "include.h"

class Network_firebase : public QObject
{
    Q_OBJECT
public:
    Network_firebase();
    void GetJson();

signals:

public slots:

};

#endif // NETWORK_FIREBASE_H
