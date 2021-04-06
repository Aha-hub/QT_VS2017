/********************************************************************************
** Form generated from reading UI file 'CStartMustic.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CSTARTMUSTIC_H
#define UI_CSTARTMUSTIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <cstarmyslider.h>

QT_BEGIN_NAMESPACE

class Ui_CStartMusticClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QSpacerItem *verticalSpacer_19;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *localMusic_Btn;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_28;
    QPushButton *onlineMusic_btn;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_30;
    QPushButton *addMusic_Btn;
    QSpacerItem *horizontalSpacer_29;
    QSpacerItem *verticalSpacer_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_12;
    QSpacerItem *horizontalSpacer_5;
    QTableWidget *tableWidgetLocal;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_2;
    QGridLayout *gridLayout_8;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *horizontalSpacer_23;
    QTableWidget *tableWidget_4;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *verticalSpacer_14;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *previous_Btn;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *playpausBtn;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_19;
    QPushButton *next_Btn;
    QSpacerItem *horizontalSpacer_18;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_9;
    QLabel *label;
    QLabel *musicNameLable;
    QSpacerItem *verticalSpacer_9;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_7;
    CStarMySlider *timeSlider;
    QSpacerItem *horizontalSpacer_31;
    QSlider *vloumeSlider;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_8;
    QLabel *showTime2;
    QLabel *label_2;
    QLabel *showTime;
    QSpacerItem *horizontalSpacer_21;
    QLabel *lable_5;
    QLabel *showVolume;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_20;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CStartMusticClass)
    {
        if (CStartMusticClass->objectName().isEmpty())
            CStartMusticClass->setObjectName(QStringLiteral("CStartMusticClass"));
        CStartMusticClass->resize(1054, 817);
        centralWidget = new QWidget(CStartMusticClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalSpacer_19 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_19, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        localMusic_Btn = new QPushButton(centralWidget);
        localMusic_Btn->setObjectName(QStringLiteral("localMusic_Btn"));

        horizontalLayout_5->addWidget(localMusic_Btn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(90, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_28);

        onlineMusic_btn = new QPushButton(centralWidget);
        onlineMusic_btn->setObjectName(QStringLiteral("onlineMusic_btn"));

        horizontalLayout_9->addWidget(onlineMusic_btn);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_14);


        verticalLayout_3->addLayout(horizontalLayout_9);

        verticalSpacer_5 = new QSpacerItem(90, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_5);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_30 = new QSpacerItem(37, 25, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_30);

        addMusic_Btn = new QPushButton(centralWidget);
        addMusic_Btn->setObjectName(QStringLiteral("addMusic_Btn"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(addMusic_Btn->sizePolicy().hasHeightForWidth());
        addMusic_Btn->setSizePolicy(sizePolicy);

        horizontalLayout_10->addWidget(addMusic_Btn);

        horizontalSpacer_29 = new QSpacerItem(37, 25, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_29);


        verticalLayout_3->addLayout(horizontalLayout_10);

        verticalSpacer_2 = new QSpacerItem(90, 247, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_2);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 1, 1);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setMinimumSize(QSize(0, 300));
        tabWidget->setIconSize(QSize(0, 0));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer_12 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_12, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 0, 1, 1);

        tableWidgetLocal = new QTableWidget(tab);
        if (tableWidgetLocal->columnCount() < 4)
            tableWidgetLocal->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetLocal->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetLocal->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetLocal->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetLocal->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (tableWidgetLocal->rowCount() < 2)
            tableWidgetLocal->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetLocal->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetLocal->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetLocal->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetLocal->setItem(0, 1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetLocal->setItem(0, 2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetLocal->setItem(1, 0, __qtablewidgetitem9);
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setBackground(brush);
        tableWidgetLocal->setItem(1, 1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetLocal->setItem(1, 2, __qtablewidgetitem11);
        tableWidgetLocal->setObjectName(QStringLiteral("tableWidgetLocal"));
        tableWidgetLocal->setShowGrid(true);
        tableWidgetLocal->setSortingEnabled(false);
        tableWidgetLocal->setWordWrap(true);

        gridLayout->addWidget(tableWidgetLocal, 1, 1, 1, 1);

        horizontalSpacer_12 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_12, 1, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_4, 2, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        gridLayout_8 = new QGridLayout(tab_2);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        verticalSpacer_7 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_8->addItem(verticalSpacer_7, 0, 1, 1, 1);

        horizontalSpacer_23 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_23, 1, 0, 1, 1);

        tableWidget_4 = new QTableWidget(tab_2);
        if (tableWidget_4->columnCount() < 3)
            tableWidget_4->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_4->setHorizontalHeaderItem(2, __qtablewidgetitem14);
        tableWidget_4->setObjectName(QStringLiteral("tableWidget_4"));
        tableWidget_4->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableWidget_4->sizePolicy().hasHeightForWidth());
        tableWidget_4->setSizePolicy(sizePolicy2);

        gridLayout_8->addWidget(tableWidget_4, 1, 1, 2, 2);

        horizontalSpacer_13 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_13, 2, 3, 1, 1);

        verticalSpacer_14 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_8->addItem(verticalSpacer_14, 3, 2, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tabWidget, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_20);

        previous_Btn = new QPushButton(centralWidget);
        previous_Btn->setObjectName(QStringLiteral("previous_Btn"));

        horizontalLayout_8->addWidget(previous_Btn);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_16);


        verticalLayout_2->addLayout(horizontalLayout_8);

        verticalSpacer_8 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_17);

        playpausBtn = new QPushButton(centralWidget);
        playpausBtn->setObjectName(QStringLiteral("playpausBtn"));

        horizontalLayout_7->addWidget(playpausBtn);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_15);


        verticalLayout_2->addLayout(horizontalLayout_7);

        verticalSpacer_6 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_6);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_19);

        next_Btn = new QPushButton(centralWidget);
        next_Btn->setObjectName(QStringLiteral("next_Btn"));

        horizontalLayout_6->addWidget(next_Btn);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_18);


        verticalLayout_2->addLayout(horizontalLayout_6);


        gridLayout_2->addLayout(verticalLayout_2, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_9 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label);

        musicNameLable = new QLabel(centralWidget);
        musicNameLable->setObjectName(QStringLiteral("musicNameLable"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(musicNameLable->sizePolicy().hasHeightForWidth());
        musicNameLable->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(musicNameLable);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_9 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_9);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        timeSlider = new CStarMySlider(centralWidget);
        timeSlider->setObjectName(QStringLiteral("timeSlider"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(timeSlider->sizePolicy().hasHeightForWidth());
        timeSlider->setSizePolicy(sizePolicy4);
        timeSlider->setMinimumSize(QSize(500, 0));
        timeSlider->setMaximum(99999);
        timeSlider->setSingleStep(0);
        timeSlider->setValue(155);
        timeSlider->setSliderPosition(155);
        timeSlider->setOrientation(Qt::Horizontal);
        timeSlider->setInvertedAppearance(false);
        timeSlider->setInvertedControls(false);

        horizontalLayout_2->addWidget(timeSlider);

        horizontalSpacer_31 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_31);

        vloumeSlider = new QSlider(centralWidget);
        vloumeSlider->setObjectName(QStringLiteral("vloumeSlider"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(100);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(vloumeSlider->sizePolicy().hasHeightForWidth());
        vloumeSlider->setSizePolicy(sizePolicy5);
        vloumeSlider->setSliderPosition(34);
        vloumeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(vloumeSlider);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_10 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_10);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        showTime2 = new QLabel(centralWidget);
        showTime2->setObjectName(QStringLiteral("showTime2"));
        sizePolicy4.setHeightForWidth(showTime2->sizePolicy().hasHeightForWidth());
        showTime2->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(showTime2);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        showTime = new QLabel(centralWidget);
        showTime->setObjectName(QStringLiteral("showTime"));
        sizePolicy.setHeightForWidth(showTime->sizePolicy().hasHeightForWidth());
        showTime->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(showTime);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_21);

        lable_5 = new QLabel(centralWidget);
        lable_5->setObjectName(QStringLiteral("lable_5"));
        sizePolicy4.setHeightForWidth(lable_5->sizePolicy().hasHeightForWidth());
        lable_5->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(lable_5);

        showVolume = new QLabel(centralWidget);
        showVolume->setObjectName(QStringLiteral("showVolume"));
        sizePolicy4.setHeightForWidth(showVolume->sizePolicy().hasHeightForWidth());
        showVolume->setSizePolicy(sizePolicy4);

        horizontalLayout->addWidget(showVolume);

        horizontalSpacer_11 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_11);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_2->addLayout(verticalLayout, 1, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 1, 2, 2);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 2, 3, 1, 1);

        verticalSpacer_20 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_3->addItem(verticalSpacer_20, 3, 2, 1, 1);

        CStartMusticClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CStartMusticClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1054, 26));
        CStartMusticClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CStartMusticClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CStartMusticClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CStartMusticClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CStartMusticClass->setStatusBar(statusBar);

        retranslateUi(CStartMusticClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CStartMusticClass);
    } // setupUi

    void retranslateUi(QMainWindow *CStartMusticClass)
    {
        CStartMusticClass->setWindowTitle(QApplication::translate("CStartMusticClass", "Music", Q_NULLPTR));
        localMusic_Btn->setText(QApplication::translate("CStartMusticClass", "\346\234\254\345\234\260\351\237\263\344\271\220", Q_NULLPTR));
        onlineMusic_btn->setText(QApplication::translate("CStartMusticClass", "\345\234\250\347\272\277\351\237\263\344\271\220", Q_NULLPTR));
        addMusic_Btn->setText(QApplication::translate("CStartMusticClass", "\346\267\273\345\212\240\351\237\263\344\271\220", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetLocal->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CStartMusticClass", "\346\255\214\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetLocal->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CStartMusticClass", "\346\255\214\346\211\213", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetLocal->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CStartMusticClass", "\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetLocal->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("CStartMusticClass", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetLocal->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("CStartMusticClass", "\346\226\260\345\273\272\350\241\214", Q_NULLPTR));

        const bool __sortingEnabled = tableWidgetLocal->isSortingEnabled();
        tableWidgetLocal->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetLocal->item(1, 0);
        ___qtablewidgetitem5->setText(QApplication::translate("CStartMusticClass", "a11", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetLocal->item(1, 1);
        ___qtablewidgetitem6->setText(QApplication::translate("CStartMusticClass", "a22", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetLocal->item(1, 2);
        ___qtablewidgetitem7->setText(QApplication::translate("CStartMusticClass", "a33", Q_NULLPTR));
        tableWidgetLocal->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("CStartMusticClass", "\346\234\254\345\234\260\351\237\263\344\271\220", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_4->horizontalHeaderItem(0);
        ___qtablewidgetitem8->setText(QApplication::translate("CStartMusticClass", "\346\255\214\346\233\262\345\220\215\347\247\260", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_4->horizontalHeaderItem(1);
        ___qtablewidgetitem9->setText(QApplication::translate("CStartMusticClass", "\346\255\214\346\211\213", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_4->horizontalHeaderItem(2);
        ___qtablewidgetitem10->setText(QApplication::translate("CStartMusticClass", "\346\227\266\351\225\277", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("CStartMusticClass", "\345\234\250\347\272\277\351\237\263\344\271\220", Q_NULLPTR));
        previous_Btn->setText(QApplication::translate("CStartMusticClass", "\344\270\212\344\270\200\346\233\262", Q_NULLPTR));
        playpausBtn->setText(QApplication::translate("CStartMusticClass", "\346\222\255\346\224\276", Q_NULLPTR));
        next_Btn->setText(QApplication::translate("CStartMusticClass", "\344\270\213\344\270\200\346\233\262", Q_NULLPTR));
        label->setText(QApplication::translate("CStartMusticClass", "\345\275\223\345\211\215\346\222\255\346\224\276\346\255\214\346\233\262\357\274\232", Q_NULLPTR));
        musicNameLable->setText(QApplication::translate("CStartMusticClass", "\347\251\272", Q_NULLPTR));
        showTime2->setText(QApplication::translate("CStartMusticClass", "0:0", Q_NULLPTR));
        label_2->setText(QApplication::translate("CStartMusticClass", "/", Q_NULLPTR));
        showTime->setText(QApplication::translate("CStartMusticClass", "0:0", Q_NULLPTR));
        lable_5->setText(QApplication::translate("CStartMusticClass", "\351\237\263\351\207\217\357\274\232", Q_NULLPTR));
        showVolume->setText(QApplication::translate("CStartMusticClass", "36", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CStartMusticClass: public Ui_CStartMusticClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CSTARTMUSTIC_H
