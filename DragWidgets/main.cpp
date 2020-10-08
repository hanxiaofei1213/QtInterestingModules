#include "dragwidgets.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DragWidgets w;
    w.show();
    return a.exec();
}
