#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "opencv4/opencv2/opencv.hpp"
#include "opencv4/opencv2/highgui/highgui.hpp"
#include "opencv4/opencv2/imgproc/imgproc.hpp"
#include "opencv4/opencv2/objdetect/objdetect.hpp"
#include "opencv4/opencv2/core/core.hpp"
#include "opencv4/opencv2/dnn/dnn.hpp"
#include "opencv4/opencv2/videoio.hpp"
#include "raspicam/raspicam_cv.h"
#include <QCamera>
#include <QScrollArea>
#include <QMediaPlayer>
#include <QPixmap>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QCameraViewfinder>
#include <QNetworkAccessManager>
#include <QVBoxLayout>
#include <QObject>
#include <QDebug>
#include <QTime>
#include <QtSql/QSql>
#include <QtSql/QtSql>
#include <QtSql/QSqlDatabase>
#include <string.h>
#include <fstream>
#include <sstream>
#include <iostream>
#include <stdio.h>


using namespace std;
using namespace cv;
using namespace dnn;
using namespace raspicam;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QVBoxLayout *mLayout;
private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
