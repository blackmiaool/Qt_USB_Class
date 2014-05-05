#ifndef MUSB_H
#define MUSB_H


#include <windows.h>
#include <dbt.h>
#include <QString>
#include <QMainWindow>
#include "qdebug.h"
#include "libusb.h"
#include <QStandardItemModel>
#include <QDir>
#if defined (__cplusplus)
extern "C" {
#endif
extern int ddd(libusb_device **devs);

#if defined (__cplusplus)
}
#endif
namespace Ui {
class MUSB;
}

class MUSB : public QMainWindow
{
    Q_OBJECT

public:
    libusb_device **devs;
    explicit MUSB(QWidget *parent = 0);
    ~MUSB();
    QStandardItemModel *goodsModel;
    void showUSBtree(void);
    void tree_append(libusb_device *);
private:
        Ui::MUSB *ui;

};

#endif // MUSB_H
