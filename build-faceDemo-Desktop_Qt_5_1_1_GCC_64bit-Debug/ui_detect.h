/********************************************************************************
** Form generated from reading UI file 'detect.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETECT_H
#define UI_DETECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Detect
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *recognize;
    QLabel *label_name;
    QLabel *label_cam;
    QPushButton *startCam;
    QPushButton *takePic;
    QPushButton *changePerson;
    QLabel *label1;
    QLabel *label4;
    QLabel *label2;
    QLabel *label3;
    QLabel *label5;
    QLabel *label6;
    QLabel *label7;
    QLabel *label8;
    QLabel *label9;
    QPushButton *savePic;
    QPushButton *trainData;

    void setupUi(QDialog *Detect)
    {
        if (Detect->objectName().isEmpty())
            Detect->setObjectName(QStringLiteral("Detect"));
        Detect->resize(840, 540);
        label = new QLabel(Detect);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 61, 16));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        pushButton = new QPushButton(Detect);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(650, 500, 100, 25));
        recognize = new QPushButton(Detect);
        recognize->setObjectName(QStringLiteral("recognize"));
        recognize->setGeometry(QRect(510, 500, 100, 25));
        label_name = new QLabel(Detect);
        label_name->setObjectName(QStringLiteral("label_name"));
        label_name->setGeometry(QRect(120, 6, 141, 20));
        label_name->setFont(font);
        label_cam = new QLabel(Detect);
        label_cam->setObjectName(QStringLiteral("label_cam"));
        label_cam->setGeometry(QRect(0, 40, 400, 400));
        label_cam->setFrameShadow(QFrame::Plain);
        label_cam->setAlignment(Qt::AlignCenter);
        startCam = new QPushButton(Detect);
        startCam->setObjectName(QStringLiteral("startCam"));
        startCam->setGeometry(QRect(80, 460, 100, 25));
        takePic = new QPushButton(Detect);
        takePic->setObjectName(QStringLiteral("takePic"));
        takePic->setGeometry(QRect(220, 460, 100, 25));
        changePerson = new QPushButton(Detect);
        changePerson->setObjectName(QStringLiteral("changePerson"));
        changePerson->setGeometry(QRect(125, 500, 150, 25));
        label1 = new QLabel(Detect);
        label1->setObjectName(QStringLiteral("label1"));
        label1->setGeometry(QRect(420, 40, 120, 120));
        label4 = new QLabel(Detect);
        label4->setObjectName(QStringLiteral("label4"));
        label4->setGeometry(QRect(420, 180, 120, 120));
        label2 = new QLabel(Detect);
        label2->setObjectName(QStringLiteral("label2"));
        label2->setGeometry(QRect(560, 40, 120, 120));
        label3 = new QLabel(Detect);
        label3->setObjectName(QStringLiteral("label3"));
        label3->setGeometry(QRect(700, 40, 120, 120));
        label5 = new QLabel(Detect);
        label5->setObjectName(QStringLiteral("label5"));
        label5->setGeometry(QRect(560, 180, 120, 120));
        label6 = new QLabel(Detect);
        label6->setObjectName(QStringLiteral("label6"));
        label6->setGeometry(QRect(700, 180, 120, 120));
        label7 = new QLabel(Detect);
        label7->setObjectName(QStringLiteral("label7"));
        label7->setGeometry(QRect(420, 320, 120, 120));
        label8 = new QLabel(Detect);
        label8->setObjectName(QStringLiteral("label8"));
        label8->setGeometry(QRect(560, 320, 120, 120));
        label9 = new QLabel(Detect);
        label9->setObjectName(QStringLiteral("label9"));
        label9->setGeometry(QRect(700, 320, 120, 120));
        savePic = new QPushButton(Detect);
        savePic->setObjectName(QStringLiteral("savePic"));
        savePic->setGeometry(QRect(510, 460, 100, 25));
        trainData = new QPushButton(Detect);
        trainData->setObjectName(QStringLiteral("trainData"));
        trainData->setGeometry(QRect(650, 460, 100, 25));

        retranslateUi(Detect);
        QObject::connect(pushButton, SIGNAL(clicked()), Detect, SLOT(close()));

        QMetaObject::connectSlotsByName(Detect);
    } // setupUi

    void retranslateUi(QDialog *Detect)
    {
        Detect->setWindowTitle(QApplication::translate("Detect", "Dialog", 0));
        label->setText(QApplication::translate("Detect", "Person:", 0));
        pushButton->setText(QApplication::translate("Detect", "quit", 0));
        recognize->setText(QApplication::translate("Detect", "Recognize", 0));
        label_name->setText(QString());
        label_cam->setText(QApplication::translate("Detect", "Cam is off! Please turn it on!", 0));
        startCam->setText(QApplication::translate("Detect", "StartCam", 0));
        takePic->setText(QApplication::translate("Detect", "TakePIC", 0));
        changePerson->setText(QApplication::translate("Detect", "ChangePerson", 0));
        label1->setText(QApplication::translate("Detect", "face1", 0));
        label4->setText(QApplication::translate("Detect", "face4", 0));
        label2->setText(QApplication::translate("Detect", "face2", 0));
        label3->setText(QApplication::translate("Detect", "face3", 0));
        label5->setText(QApplication::translate("Detect", "face5", 0));
        label6->setText(QApplication::translate("Detect", "face6", 0));
        label7->setText(QApplication::translate("Detect", "face7", 0));
        label8->setText(QApplication::translate("Detect", "face8", 0));
        label9->setText(QApplication::translate("Detect", "face9", 0));
        savePic->setText(QApplication::translate("Detect", "SavePIC", 0));
        trainData->setText(QApplication::translate("Detect", "TrainData", 0));
    } // retranslateUi

};

namespace Ui {
    class Detect: public Ui_Detect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETECT_H
