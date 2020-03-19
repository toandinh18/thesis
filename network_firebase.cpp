#include "network_firebase.h"

Network_firebase::Network_firebase() {
    QNetworkAccessManager networkManager;
    QUrl url("https://thesis-final123.firebaseio.com/apt_title.json");
    QNetworkRequest PutRequest;
    PutRequest.setUrl(url);
    currentReply = networkManager.get(PutRequest);
    // parsing JSON

    connect(&networkManager,SIGNAL(finished(QNetworkReply*)),
            this, SLOT(onResult(QNetworkReply*)));
}

void Network_firebase::onResult(QNetworkReply* reply) {
//    if (currentReply->error() != QNetworkReply::NoError)
//        return;  // ...only in a blog post
    QString data = (QString) reply->readAll();

    QScriptEngine engine;
    QScriptValue result = engine.evaluate(data);
    QScriptValue entries = result.property("apt_title");
    QScriptValueIterator it(entries);
    while (it.hasNext()) {
           it.next();
           QScriptValue entry = it.value();
    }
}
