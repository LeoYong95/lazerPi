#ifndef LAZERPI_H
#define LAZERPI_H

#include <QMainWindow>


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

};

#endif // LAZERPI_H
