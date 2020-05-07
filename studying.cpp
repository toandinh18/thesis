#include "studying.h"
#include "ui_studying.h"

studying::studying(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::studying)
{
    ui->setupUi(this);
}

studying::~studying()
{
    delete ui;
}
