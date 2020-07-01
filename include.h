#ifndef INCLUDE_H
#define INCLUDE_H

//define model pocketsphinx direct
#define MODELDIR "/home/pi/STT_2/pocketsphinx/model"
#define PATH "/home/pi/STT_2"

// include opencv library
#include "opencv4/opencv2/opencv.hpp"
#include "opencv4/opencv2/highgui/highgui.hpp"
#include "opencv4/opencv2/imgproc/imgproc.hpp"
#include "opencv4/opencv2/objdetect/objdetect.hpp"
#include "opencv4/opencv2/core/core.hpp"
#include "opencv4/opencv2/dnn/dnn.hpp"
#include "opencv4/opencv2/videoio.hpp"
#include "raspicam/raspicam_cv.h"

// include library for pocketsphinx
#include <pocketsphinx.h>
#include <sphinxbase/ad.h>
#include <sphinxbase/err.h>

// include Qt librarry
#include <QCamera>
#include <QScrollArea>
#include <QMediaPlayer>
#include <QPixmap>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QCameraViewfinder>
#include <QNetworkAccessManager>
#include <QAudioInput>
#include <QAudioFormat>
#include <QAudioDeviceInfo>
#include <QAudioRecorder>
#include <QGroupBox>
#include <QButtonGroup>

#include <QVBoxLayout>
#include <QObject>
#include <QDebug>
#include <QTime>
#include <QDebug>
#include <QString>
#include <QByteArray>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QThread>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QScriptValueIterator>
#include <QtScript/QScriptEngine>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QRadioButton>


// include c++ standard library
#include <string.h>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <iostream>
#include <assert.h>


using namespace std;
using namespace cv;
using namespace dnn;
using namespace raspicam;


#endif // INCLUDE_H
