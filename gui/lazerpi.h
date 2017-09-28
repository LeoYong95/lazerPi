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

    void paintEvent(QPaintEvent* evt);
public slots:
     void setImage(const QImage& image);

private:
    Ui::LazerPi *ui;
    QImage m_image;
    QSize m_size;
};

#endif // LAZERPI_H
