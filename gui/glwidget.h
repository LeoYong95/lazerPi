#ifndef GLWIDGET_H
#define GLWIDGET_H

#include <QObject>

class GLWidget : public QObject
{
    Q_OBJECT
public:
    explicit GLWidget(QObject *parent = 0);
    void initializeGL();
    void paintingGL();
    void resizeGL(int w, int h);
};

#endif // GLWIDGET_H
