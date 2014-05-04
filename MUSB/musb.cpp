#include "musb.h"
#include "ui_musb.h"

MUSB::MUSB(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MUSB)
{
    ui->setupUi(this);
}

MUSB::~MUSB()
{
    delete ui;
}
