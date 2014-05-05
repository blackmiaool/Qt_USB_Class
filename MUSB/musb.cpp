#include "musb.h"
#include "ui_musb.h"

MUSB::MUSB(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MUSB)
{
    ui->setupUi(this);
    qDebug() << "start";
    libusb_init(NULL);
    libusb_get_device_list(NULL, &devs);

    goodsModel = new QStandardItemModel();
    ui->treeView->setModel(goodsModel);

    QStringList s;
    s.append("USBdev tree");
    goodsModel->setHorizontalHeaderLabels(s);


    //    QList<QStandardItem *> items;//List容器
    //    QStandardItem *item = new QStandardItem("miao");
    //    items.append(item);//添加QStandardItemModel信息
    //    goodsModel->appendRow(items);//插入父节点信息


    //    QList<QStandardItem *> childItems;//List容器
    //    QStandardItem *item2 = new QStandardItem("filename");
    //    childItems.push_back(item2);//插入数据
    //    items.at(0)->appendRow(childItems);
    //    item2->appendRow(new QStandardItem("444"));


    showUSBtree();


}

void MUSB::showUSBtree()
{
    libusb_device *dev;
    int i = 0, j = 0;
    uint8_t path[8];

    while ((dev = devs[i++]) != NULL) {
        tree_append(dev);
        struct libusb_device_descriptor desc;
        int r = libusb_get_device_descriptor(dev, &desc);
        if (r < 0) {
            fprintf(stderr, "failed to get device descriptor");
            return;
        }
        printf("%04x:%04x (bus %d, device %d)",
               desc.idVendor, desc.idProduct,
               libusb_get_bus_number(dev), libusb_get_device_address(dev));

        r = libusb_get_port_numbers(dev, path, sizeof(path));
        if (r > 0) {
            printf(" path: %d", path[0]);
            for (j = 1; j < r; j++)
                printf(".%d", path[j]);
        }
        printf("\n");
    }

}
void MUSB::tree_append(libusb_device * dev_this)
{
    uint8_t bus_num=libusb_get_bus_number(dev_this);
    uint8_t dev_addr=libusb_get_device_address(dev_this);
    struct libusb_device_descriptor desc;
    libusb_get_device_descriptor(dev_this, &desc);
    QString labelString=QString("bus%1").arg(bus_num);
    QList<QStandardItem *> USB_list;//List容器
    QStandardItem *USB_bus = new QStandardItem(labelString);
    int bus_pos=0;
    unsigned char string_buf[20];
    libusb_device_handle *handle;
    for(int i=0;i<goodsModel->rowCount();i++)
    {

        qDebug()<<goodsModel->data(goodsModel->index(i,0)).toString();
        if(labelString==goodsModel->data(goodsModel->index(i,0)).toString())
        {
            qDebug()<<desc.idVendor<<"repeat\r\n";
            bus_pos=i;
            goto repeat;

        }

    }
    USB_list.append(USB_bus);
    goodsModel->appendRow(USB_list);

repeat:;
    QList<QStandardItem *> addr_list;//List容器
    qDebug()<<"dddd";
    QStandardItem *addr_item=new QStandardItem(QString("addr%1").arg(dev_addr));
    addr_list.append(addr_item);
    goodsModel->item(bus_pos,0)->appendRow(addr_list);


            //if()
            //goodsModel->appendRow();
            // qDebug()<<desc.idVendor;

}
MUSB::~MUSB()
{
    libusb_free_device_list(devs, 1);
    libusb_exit(NULL);
    delete ui;
}


