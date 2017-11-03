/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelAmplitude;
    QSlider *horizontalSliderAmplitude;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelFrrequencia;
    QSlider *horizontalSliderFrequencia;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelVelocidade;
    QSlider *horizontalSliderVelocidade;
    QHBoxLayout *horizontalLayout_4;
    QSlider *horizontalSliderEvento;
    QLCDNumber *lcdNumberEvento;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QTextEdit *textEdit;
    QPushButton *pushButtonCopia;
    QTextBrowser *textBrowser;
    Plotter *widget;
    QPushButton *pushButtonQuit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(510, 451);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        MainWindow->setFont(font);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icones/quit"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelAmplitude = new QLabel(centralWidget);
        labelAmplitude->setObjectName(QStringLiteral("labelAmplitude"));

        horizontalLayout->addWidget(labelAmplitude);

        horizontalSliderAmplitude = new QSlider(centralWidget);
        horizontalSliderAmplitude->setObjectName(QStringLiteral("horizontalSliderAmplitude"));
        horizontalSliderAmplitude->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSliderAmplitude);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelFrrequencia = new QLabel(centralWidget);
        labelFrrequencia->setObjectName(QStringLiteral("labelFrrequencia"));

        horizontalLayout_2->addWidget(labelFrrequencia);

        horizontalSliderFrequencia = new QSlider(centralWidget);
        horizontalSliderFrequencia->setObjectName(QStringLiteral("horizontalSliderFrequencia"));
        horizontalSliderFrequencia->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSliderFrequencia);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelVelocidade = new QLabel(centralWidget);
        labelVelocidade->setObjectName(QStringLiteral("labelVelocidade"));

        horizontalLayout_3->addWidget(labelVelocidade);

        horizontalSliderVelocidade = new QSlider(centralWidget);
        horizontalSliderVelocidade->setObjectName(QStringLiteral("horizontalSliderVelocidade"));
        horizontalSliderVelocidade->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSliderVelocidade);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSliderEvento = new QSlider(centralWidget);
        horizontalSliderEvento->setObjectName(QStringLiteral("horizontalSliderEvento"));
        horizontalSliderEvento->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSliderEvento);

        lcdNumberEvento = new QLCDNumber(centralWidget);
        lcdNumberEvento->setObjectName(QStringLiteral("lcdNumberEvento"));
        QFont font1;
        font1.setFamily(QStringLiteral("Electron"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        lcdNumberEvento->setFont(font1);
        lcdNumberEvento->setLineWidth(1);
        lcdNumberEvento->setSegmentStyle(QLCDNumber::Flat);

        horizontalLayout_4->addWidget(lcdNumberEvento);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout_5->addWidget(textEdit);

        pushButtonCopia = new QPushButton(centralWidget);
        pushButtonCopia->setObjectName(QStringLiteral("pushButtonCopia"));

        horizontalLayout_5->addWidget(pushButtonCopia);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        horizontalLayout_5->addWidget(textBrowser);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        widget = new Plotter(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMinimumSize(QSize(80, 20));

        horizontalLayout_6->addWidget(widget);

        horizontalLayout_6->setStretch(0, 30);
        horizontalLayout_6->setStretch(1, 70);

        verticalLayout->addLayout(horizontalLayout_6);

        pushButtonQuit = new QPushButton(centralWidget);
        pushButtonQuit->setObjectName(QStringLiteral("pushButtonQuit"));
        QFont font2;
        font2.setFamily(QStringLiteral("DejaVu Sans Mono"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        pushButtonQuit->setFont(font2);

        verticalLayout->addWidget(pushButtonQuit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 510, 19));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionQuit);
        mainToolBar->addAction(actionQuit);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderEvento, SIGNAL(valueChanged(int)), lcdNumberEvento, SLOT(display(int)));
        QObject::connect(pushButtonCopia, SIGNAL(clicked()), MainWindow, SLOT(copiaTexto()));
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(mataTudo()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", Q_NULLPTR));
        labelAmplitude->setText(QApplication::translate("MainWindow", "Amplitude", Q_NULLPTR));
        labelFrrequencia->setText(QApplication::translate("MainWindow", "Frequ\303\252ncia", Q_NULLPTR));
        labelVelocidade->setText(QApplication::translate("MainWindow", "Velocidade", Q_NULLPTR));
        pushButtonCopia->setText(QApplication::translate("MainWindow", ">>>", Q_NULLPTR));
        pushButtonQuit->setText(QApplication::translate("MainWindow", "Morre,diabo!", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
