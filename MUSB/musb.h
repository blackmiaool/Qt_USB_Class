#ifndef MUSB_H
#define MUSB_H


#include <windows.h>
#include <dbt.h>
#include <QString>
#include <QMainWindow>
#include "qdebug.h"
namespace Ui {
class MUSB;
}

class MUSB : public QMainWindow
{
    Q_OBJECT

public:
    explicit MUSB(QWidget *parent = 0);
    ~MUSB();

private:
    Ui::MUSB *ui;

};

#endif // MUSB_H
