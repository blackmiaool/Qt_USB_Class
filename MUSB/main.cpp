#include "musb.h"
#include <QApplication>
#include <qdebug.h>
#if defined (__cplusplus)
extern "C" {
#endif
extern int ddd(void);

#if defined (__cplusplus)
}
#endif

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MUSB w;
    w.show();
    qDebug()<<ddd();
    return a.exec();
}

