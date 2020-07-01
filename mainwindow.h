#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "include.h"
#include <first_page.h>
#include <speech2text.h>

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
    first_page page1;
};

#endif // MAINWINDOW_H
