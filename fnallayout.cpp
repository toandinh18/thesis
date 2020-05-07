#include "fnallayout.h"
#include "ui_fnallayout.h"

fnalLayout::fnalLayout(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::fnalLayout)
{
    ui->setupUi(this);
}

fnalLayout::~fnalLayout()
{
    delete ui;
}
