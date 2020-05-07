#ifndef FNALLAYOUT_H
#define FNALLAYOUT_H

#include <QWidget>

namespace Ui {
class fnalLayout;
}

class fnalLayout : public QWidget
{
    Q_OBJECT

public:
    explicit fnalLayout(QWidget *parent = 0);
    ~fnalLayout();

private:
    Ui::fnalLayout *ui;
};

#endif // FNALLAYOUT_H
