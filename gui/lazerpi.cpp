#include "lazerpi.h"
#include "ui_mainwindow.h"
#include "renderarea.h"

LazerPi::LazerPi(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LazerPi)
{
    ui->setupUi(this);

    renderArea = new RenderArea;

}

LazerPi::~LazerPi()
{
    delete ui;
}

void LazerPi::paintEvent(QPaintEvent* evt) {

    QPainter painter(this);

    if (!m_image.isNull()) {
        painter.drawImage(QPoint(0,0), m_image);
    }
}

void LazerPi::setImage(const QImage& image) {

    m_size = image.size();
    m_image = image.scaled(size());
    update();

}
