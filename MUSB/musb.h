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
private slots:
    void on_treeView_clicked(const QModelIndex &index);

    void on_pushButton_5_clicked();

    void on_treeView_activated(const QModelIndex &index);

    void on_treeView_entered(const QModelIndex &index);

    void on_treeView_pressed(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
        Ui::MUSB *ui;

};

#endif // MUSB_H
