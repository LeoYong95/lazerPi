#ifndef LAZERPI_H
#define LAZERPI_H

#include <QMainWindow>
#include "helper.h"

namespace Ui {
class LazerPi;
}

class LazerPi : public QMainWindow
{
    Q_OBJECT

public:

    explicit LazerPi(QWidget *parent = 0);
    ~LazerPi();

private:
    Ui::LazerPi *ui;
    Helper helper;


};

#endif // LAZERPI_H
