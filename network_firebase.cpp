#include "network_firebase.h"
#include "mainwindow.h"

Network_firebase::Network_firebase() {

}

void Network_firebase::GetJson(){
    //    Network_firebase check;
    //    QNetworkAccessManager m_manager;
    //    // make request
    //     QNetworkRequest request = QNetworkRequest(QUrl("https://thesis-final123.firebaseio.com/resource.json"));
    //      QNetworkReply* reply = m_manager.get(request);
    //      // connect to signal  when its done using lambda)
    //      QObject::connect(reply, &QNetworkReply::finished, [reply]() {
    //        // read data
    //        QString ReplyText = reply->readAll();
    //        // qDebug() << ReplyText;
    //        // ask doc to parse it
    //        QJsonDocument doc = QJsonDocument::fromJson(ReplyText.toUtf8());
    //        // we know first element in file is object, to try to ask for such

    //        QString data = doc.toJson();
    //        QJsonObject obj = doc.object();
    //        QJsonArray array = obj["items"].toArray();
    //        qDebug() << reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    //        foreach (const QJsonValue & value, array) {
    //            QJsonObject obj = value.toObject();
    //            QString login = obj["Login"].toString();
    //            qDebug() << "login" << login;
    //        }
    //        qDebug() << "get data" << data;
    //        reply->deleteLater(); // make sure to clean up
    //      });

    //      request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    //      QJsonObject obj;
    //      obj.insert("Email","tona");
    //      obj.insert("Login","status");

    //      QNetworkReply *postRequest = m_manager.post(request, QJsonDocument(obj).toJson());
    //      QObject::connect(postRequest,&QNetworkReply::finished, [postRequest]() {
    //          QJsonDocument doc = QJsonDocument::fromJson(postRequest->readAll());
    //          QJsonObject obj = doc.object();
    //          if (obj.value("status").toString() == "ok") {
    //            qDebug() << "post finish";
    //          } else {
    //              qWarning() << "ERROR" << obj.value("error").toString();
    //          }
    //      });
}
