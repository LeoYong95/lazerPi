#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}



MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent* evt) {

    QPainter painter(this);

    if (!m_image.isNull()) {
        painter.drawImage(QPoint(0,0), m_image);
    }
}

void MainWindow::setImage(const QImage& image) {

    m_size = image.size();
    m_image = image.scaled(size());
    update();

}
