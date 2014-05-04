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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MUSB
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MUSB)
    {
        if (MUSB->objectName().isEmpty())
            MUSB->setObjectName(QStringLiteral("MUSB"));
        MUSB->resize(400, 300);
        centralWidget = new QWidget(MUSB);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        MUSB->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MUSB);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        MUSB->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MUSB);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MUSB->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MUSB);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MUSB->setStatusBar(statusBar);

        retranslateUi(MUSB);

        QMetaObject::connectSlotsByName(MUSB);
    } // setupUi

    void retranslateUi(QMainWindow *MUSB)
    {
        MUSB->setWindowTitle(QApplication::translate("MUSB", "MUSB", 0));
        pushButton->setText(QApplication::translate("MUSB", "Clear", 0));
        pushButton_2->setText(QApplication::translate("MUSB", "Send", 0));
    } // retranslateUi

};

namespace Ui {
    class MUSB: public Ui_MUSB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSB_H
