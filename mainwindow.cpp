#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <network_firebase.h>
#include <QNetworkAccessManager>
#include <speech2text.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->stackedWidget->insertWidget(2,&studying_page);
    ui->stackedWidget->insertWidget(3,&final_page);
//    string text = "hello";
//    text = "flite -t " + text;
//    const char *command  = text.c_str();
//    system(command);
//    qDebug() << "load ok flite";
//    speech2text *stt = new speech2text();
//    stt->configSTT();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    qDebug("happy");
    RaspiCam_Cv cap;
    cap.set(CAP_PROP_FRAME_WIDTH,320);
    cap.set(CAP_PROP_FRAME_HEIGHT,240);
    //cap.set(CAP_PROP_FORMAT, CV_8UC1);
    cap.set(CAP_PROP_FPS,30);
    if(!cap.open()){
        qDebug() << "ERROR: Could not open camera";
    }
    // khai bao class cascade
    CascadeClassifier face_cascade;
    // Load the .xml file de nhan dien
    face_cascade.load("/home/pi/yolo/haarcascade_frontalface_alt2.xml");
    // kiem tra xem load file co thanh cong
    if(face_cascade.empty()) {
        qDebug("Error when load the .xml file \n Pls try a again");
    }
    // tien hanh nhan dien
    vector<Rect> faces;
    Mat frame;
    //tien trinh cho tung frame anh
    qDebug("start recognise");
    int x = 20;
    while(1) {
        cap.grab();
        cap.retrieve(frame);
        Mat frame1 = frame.clone();
        Mat gray;
        cvtColor(frame1, gray, COLOR_BGR2GRAY ); // convert frame to grayscale
        face_cascade.detectMultiScale( gray, faces, 1.1, 2, 0|CASCADE_SCALE_IMAGE, Size(30, 30) );

        if(faces.size() && x){
            x--;
            qDebug() << " x =" << x;
            for( int i = 0; i < faces.size(); i++) {
                rectangle(frame1, Size(faces[i].x,faces[i].y), Size(faces[i].x + faces[i].width , faces[i].y + faces[i].height), Scalar(255,255,0),2);
            }
        }
        else {
            if (x == 0) {
                qDebug() << " finish" ;
                //break next page
                ui->stackedWidget->setCurrentIndex(1);
            }
        }
        cvtColor(frame1, frame1, COLOR_BGR2RGB);
        ui->camera->setPixmap(QPixmap::fromImage(QImage(frame1.data, frame1.cols, frame1.rows, frame1.step, QImage::Format_RGB888)));
        //imshow("Detection", frame1);

        if((waitKey(30) >= 0))
            break;
    }
    cap.release();
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}
