/********************************************************************************
** Form generated from reading UI file 'updatestudios.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATESTUDIOS_H
#define UI_UPDATESTUDIOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_updatestudios
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;
    QGroupBox *groupBox;
    QLabel *label_5;
    QLineEdit *nom;
    QLabel *label_6;
    QLineEdit *id1;
    QLabel *label_7;
    QLineEdit *loc;
    QLineEdit *eq;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *id2;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *cout;
    QDateTimeEdit *date1;
    QDateTimeEdit *date2;
    QLabel *label_13;
    QLabel *label_14;
    QComboBox *stat;

    void setupUi(QDialog *updatestudios)
    {
        if (updatestudios->objectName().isEmpty())
            updatestudios->setObjectName(QStringLiteral("updatestudios"));
        updatestudios->resize(1359, 900);
        updatestudios->setStyleSheet(QStringLiteral("background-image: url(:/Sign In (1).png);"));
        label = new QLabel(updatestudios);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(390, 30, 581, 831));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("border-image: url(:/Solid_white.png);\n"
"border: none;\n"
"border-radius:45px;"));
        pushButton = new QPushButton(updatestudios);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(460, 790, 451, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"background:url(\"C:/Users/dhaou/Desktop/qt/Rectangle 1.png\");\n"
"color: rgb(255, 255, 255);\n"
"font: 16pt \"MS Shell Dlg 2\";\n"
"border-radius:10px;\n"
"border: none;\n"
"}\n"
"QPushButton:hover{\n"
" \n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(131, 131, 131);\n"
"\n"
"}"));
        label_2 = new QLabel(updatestudios);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(500, 30, 351, 91));
        label_2->setStyleSheet(QStringLiteral("background-image: url(:/Tv_tally_mtarfeskhir 1.png);"));
        label_4 = new QLabel(updatestudios);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(510, 190, 351, 20));
        QFont font2;
        font2.setPointSize(14);
        label_4->setFont(font2);
        label_4->setStyleSheet(QLatin1String("color: rgb(198, 198, 198);\n"
"background-image: url(:/Solid_white.png);"));
        label_3 = new QLabel(updatestudios);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(520, 140, 331, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("MS Sans Serif"));
        font3.setPointSize(22);
        font3.setBold(true);
        font3.setWeight(75);
        label_3->setFont(font3);
        label_3->setStyleSheet(QLatin1String("color: rgb(86, 44, 128);\n"
"background-image: url(:/Solid_white.png);"));
        groupBox = new QGroupBox(updatestudios);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(420, 230, 501, 541));
        groupBox->setStyleSheet(QLatin1String("background-image: url(:/Solid_white.png);\n"
"border: none;"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(0, 20, 131, 16));
        QFont font4;
        font4.setFamily(QStringLiteral("MS Sans Serif"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        label_5->setFont(font4);
        label_5->setStyleSheet(QStringLiteral("color: rgb(198, 198, 198);"));
        nom = new QLineEdit(groupBox);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(0, 50, 371, 31));
        nom->setFont(font2);
        nom->setStyleSheet(QStringLiteral("border:2px;"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(0, 90, 131, 16));
        label_6->setFont(font4);
        label_6->setStyleSheet(QStringLiteral("color: rgb(198, 198, 198);"));
        id1 = new QLineEdit(groupBox);
        id1->setObjectName(QStringLiteral("id1"));
        id1->setGeometry(QRect(0, 110, 371, 31));
        id1->setFont(font2);
        id1->setStyleSheet(QStringLiteral("border:2px;"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, 150, 131, 16));
        label_7->setFont(font4);
        label_7->setStyleSheet(QStringLiteral("color: rgb(198, 198, 198);"));
        loc = new QLineEdit(groupBox);
        loc->setObjectName(QStringLiteral("loc"));
        loc->setGeometry(QRect(0, 180, 371, 31));
        loc->setFont(font2);
        loc->setStyleSheet(QStringLiteral("border:2px;"));
        eq = new QLineEdit(groupBox);
        eq->setObjectName(QStringLiteral("eq"));
        eq->setGeometry(QRect(0, 240, 371, 31));
        eq->setFont(font2);
        eq->setStyleSheet(QStringLiteral("border:2px;"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, 220, 131, 16));
        label_8->setFont(font4);
        label_8->setStyleSheet(QStringLiteral("color: rgb(198, 198, 198);"));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 270, 131, 16));
        label_9->setFont(font4);
        label_9->setStyleSheet(QStringLiteral("color: rgb(198, 198, 198);"));
        id2 = new QLineEdit(groupBox);
        id2->setObjectName(QStringLiteral("id2"));
        id2->setGeometry(QRect(0, 300, 371, 31));
        id2->setFont(font2);
        id2->setStyleSheet(QStringLiteral("border:2px;"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(0, 470, 131, 16));
        label_10->setFont(font4);
        label_10->setStyleSheet(QStringLiteral("color: rgb(198, 198, 198);"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(0, 400, 131, 16));
        label_11->setFont(font4);
        label_11->setStyleSheet(QStringLiteral("color: rgb(198, 198, 198);"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(0, 340, 131, 16));
        label_12->setFont(font4);
        label_12->setStyleSheet(QStringLiteral("color: rgb(198, 198, 198);"));
        cout = new QLineEdit(groupBox);
        cout->setObjectName(QStringLiteral("cout"));
        cout->setGeometry(QRect(0, 430, 371, 31));
        cout->setFont(font2);
        cout->setStyleSheet(QStringLiteral("border:2px;"));
        date1 = new QDateTimeEdit(groupBox);
        date1->setObjectName(QStringLiteral("date1"));
        date1->setGeometry(QRect(40, 370, 194, 22));
        date2 = new QDateTimeEdit(groupBox);
        date2->setObjectName(QStringLiteral("date2"));
        date2->setGeometry(QRect(320, 370, 194, 22));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(0, 370, 31, 16));
        label_13->setFont(font4);
        label_13->setStyleSheet(QStringLiteral("color: rgb(198, 198, 198);"));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(280, 370, 21, 16));
        label_14->setFont(font4);
        label_14->setStyleSheet(QStringLiteral("color: rgb(198, 198, 198);"));
        stat = new QComboBox(groupBox);
        stat->setObjectName(QStringLiteral("stat"));
        stat->setGeometry(QRect(0, 500, 171, 22));

        retranslateUi(updatestudios);

        QMetaObject::connectSlotsByName(updatestudios);
    } // setupUi

    void retranslateUi(QDialog *updatestudios)
    {
        updatestudios->setWindowTitle(QApplication::translate("updatestudios", "Dialog", Q_NULLPTR));
        label->setText(QString());
        pushButton->setText(QApplication::translate("updatestudios", "Modifier", Q_NULLPTR));
        label_2->setText(QString());
        label_4->setText(QApplication::translate("updatestudios", "Entrer les coordonn\303\251es du studio", Q_NULLPTR));
        label_3->setText(QApplication::translate("updatestudios", "Modifier un Studio", Q_NULLPTR));
        groupBox->setTitle(QString());
        label_5->setText(QApplication::translate("updatestudios", "Nom du Studio:", Q_NULLPTR));
        label_6->setText(QApplication::translate("updatestudios", "ID Studios:", Q_NULLPTR));
        label_7->setText(QApplication::translate("updatestudios", "Locatisation:", Q_NULLPTR));
        label_8->setText(QApplication::translate("updatestudios", "Equipement:", Q_NULLPTR));
        label_9->setText(QApplication::translate("updatestudios", "ID Emmission:", Q_NULLPTR));
        label_10->setText(QApplication::translate("updatestudios", "Status:", Q_NULLPTR));
        label_11->setText(QApplication::translate("updatestudios", "Cout de Location:", Q_NULLPTR));
        label_12->setText(QApplication::translate("updatestudios", "Disponibilite:", Q_NULLPTR));
        label_13->setText(QApplication::translate("updatestudios", "de:", Q_NULLPTR));
        label_14->setText(QApplication::translate("updatestudios", "a:", Q_NULLPTR));
        stat->clear();
        stat->insertItems(0, QStringList()
         << QApplication::translate("updatestudios", "non Reserver", Q_NULLPTR)
         << QApplication::translate("updatestudios", "Reserver", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class updatestudios: public Ui_updatestudios {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATESTUDIOS_H
