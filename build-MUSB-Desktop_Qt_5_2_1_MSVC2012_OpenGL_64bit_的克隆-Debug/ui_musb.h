/********************************************************************************
** Form generated from reading UI file 'musb.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSB_H
#define UI_MUSB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MUSB
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MUSB)
    {
        if (MUSB->objectName().isEmpty())
            MUSB->setObjectName(QStringLiteral("MUSB"));
        MUSB->resize(400, 300);
        menuBar = new QMenuBar(MUSB);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        MUSB->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MUSB);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MUSB->addToolBar(mainToolBar);
        centralWidget = new QWidget(MUSB);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MUSB->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MUSB);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MUSB->setStatusBar(statusBar);

        retranslateUi(MUSB);

        QMetaObject::connectSlotsByName(MUSB);
    } // setupUi

    void retranslateUi(QMainWindow *MUSB)
    {
        MUSB->setWindowTitle(QApplication::translate("MUSB", "MUSB", 0));
    } // retranslateUi

};

namespace Ui {
    class MUSB: public Ui_MUSB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSB_H
