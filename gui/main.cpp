#include "lazerpi.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LazerPi w;
    w.show();

    return a.exec();
}
