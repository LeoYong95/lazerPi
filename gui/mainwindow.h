#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void paintEvent(QPaintEvent* evt);
public slots:
     void setImage(const QImage& image);

private:
    Ui::MainWindow *ui;
    QImage m_image;
    QSize m_size;
};

#endif // MAINWINDOW_H
