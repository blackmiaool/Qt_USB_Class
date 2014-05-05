#include "musb.h"
#include <QApplication>
#include <qdebug.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MUSB w;
    w.show();

    return a.exec();
}

