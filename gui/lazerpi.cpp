#include "lazerpi.h"
#include "ui_mainwindow.h"


LazerPi::LazerPi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LazerPi)
{
    ui->setupUi(this);

}

LazerPi::~LazerPi()
{
    delete ui;
}


