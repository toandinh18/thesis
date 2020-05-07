#-------------------------------------------------
#
# Project created by QtCreator 2020-02-24T09:22:02
#
#-------------------------------------------------

QT       += core gui multimedia multimediawidgets network script

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = appli2
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    network_firebase.cpp \
    studying.cpp \
    fnallayout.cpp

#install the enssensial C++ lib

INCLUDEPATH += /usr/local/include/pocketsphinx
INCLUDEPATH += /usr/local/include/sphinxbase
INCLUDEPATH += /usr/local/include/opencv4
DEPENDPATH += /usr/local/include

#config for java
INCLUDEPATH += /usr/lib/jvm/jdk-8-oracle-arm32-vfp-hflt/jre/lib/arm/server
INCLUDEPATH += /usr/lib/jvm/jdk-8-oracle-arm32-vfp-hflt/include/linux

#lib for opencv

LIBS += /usr/local/lib/libopencv_core.so.4.0
LIBS += /usr/local/lib/libopencv_imgproc.so.4.0
LIBS += /usr/local/lib/libopencv_highgui.so.4.0
LIBS += /usr/local/lib/libopencv_videoio.so.4.0
LIBS += /usr/local/lib/libopencv_objdetect.so.4.0
LIBS += /usr/local/lib/libopencv_dnn.so.4.0
#libs for camera in rasp
LIBS += /usr/local/lib/libraspicam.so.0.1
LIBS += /usr/local/lib/libraspicam_cv.so
#libs for pocketsphinx _ STT
LIBS += /usr/local/lib/libsphinxbase.so.3
LIBS += /usr/local/lib/libpocketsphinx.so.3
LIBS += /usr/local/lib/libsphinxad.so.3
#libs for java
LIBS += -L/usr/lib/jvm/jdk-8-oracle-arm32-vfp-hflt/jre/lib/arm/server/ -ljvm

HEADERS  += mainwindow.h \
    network_firebase.h \
    include.h \
    studying.h \
    fnallayout.h

FORMS    += mainwindow.ui \
    studying.ui \
    fnallayout.ui

RESOURCES += \
    image.qrc

