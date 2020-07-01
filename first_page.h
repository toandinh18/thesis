#ifndef FIRST_PAGE_H
#define FIRST_PAGE_H

#include <QWidget>
#include <include.h>
#include <studying.h>
#include <final.h>
namespace Ui {
class first_page;
}

class first_page : public QWidget
{
    Q_OBJECT

public:
    explicit first_page(QWidget *parent = 0);
    ~first_page();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::first_page *ui;
    studying studying_page;
    Final final_page;
};

#endif // FIRST_PAGE_H
