#ifndef STUDYING_H
#define STUDYING_H

#include <QWidget>
#include "include.h"
namespace Ui {
class studying;
}

class studying : public QWidget
{
    Q_OBJECT

public:
    explicit studying(QWidget *parent = 0);
    ~studying();

private slots:
    void next_page();

private:
    Ui::studying *ui;

};

#endif // STUDYING_H
