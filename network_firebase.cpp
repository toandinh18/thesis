#include "network_firebase.h"
#include "mainwindow.h"

Network_firebase::Network_firebase() {

}

void Network_firebase::GetJson(){
    QNetworkAccessManager networkManager;
    QUrl url("https://thesis-final123.firebaseio.com/sport.json");
    QNetworkRequest PutRequest;
    PutRequest.setUrl(url);
    QNetworkReply *currentReply = networkManager.get(PutRequest);
    // parsing JSON
    if(currentReply->error() != QNetworkReply::NoError)
        qDebug("Error in reply");
    QString data = (QString) currentReply->readAll();
    qDebug() << "got data" << data;

//    connect(&networkManager,SIGNAL(finished(QNetworkReply*)),
//            this, SLOT(onResult(QNetworkReply*)));
}

//void Network_firebase::onResult(QNetworkReply* reply) {
//    if (currentReply->error() != QNetworkReply::NoError)
//        qDebug("Error in reply");  // ...only in a blog post
//    QString data = (QString) reply->readAll();
//    qDebug() << data;
//    QScriptEngine engine;
//    QScriptValue result = engine.evaluate(data);
//    QScriptValue entries = result.property("sport");
//    qDebug() << entries;

//    QScriptValueIterator it(entries);
//    while (it.hasNext()) {
//           it.next();
//           QScriptValue entry = it.value();
//    }
//}
