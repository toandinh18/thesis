#include "studying.h"
#include "ui_studying.h"

studying::studying(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::studying)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    QButtonGroup *gr1 = new QButtonGroup();
    QVBoxLayout *vbox1 = new QVBoxLayout;
//    vbox1->addWidget(radioButton_1);
//    vbox1->addWidget(radioButton_2);
//    vbox1->addWidget(radioButton_3);
//    vbox1->addWidget(radioButton_4);

//    QThread::msleep(6000);
//    ui->stackedWidget->setCurrentIndex(1);
    connect(ui->next,&QPushButton::clicked,this, &studying::next_page);
}

studying::~studying()
{
    delete ui;
}

void studying::next_page(){
    ui->stackedWidget->setCurrentIndex(1);
}
