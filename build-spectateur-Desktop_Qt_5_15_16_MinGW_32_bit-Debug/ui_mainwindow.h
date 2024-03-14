/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *Employer;
    QWidget *Gerer_2;
    QLabel *label_3;
    QLineEdit *LineSupprimer_2;
    QPushButton *BoutonSupprimer_2;
    QLabel *label_4;
    QLineEdit *LineChercher_2;
    QTableView *tableView_2;
    QPushButton *pb_gotomodifier;
    QPushButton *Boutonchercher;
    QLabel *label_5;
    QWidget *Ajouter_2;
    QGroupBox *groupBox_2;
    QPushButton *pb_ajouter_2;
    QPushButton *BoutonModifier_2;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *ID_2;
    QLineEdit *le_id_2;
    QLabel *Nom_2;
    QLineEdit *le_nom_2;
    QLabel *label_10;
    QLineEdit *le_prenom_2;
    QLabel *label_11;
    QLineEdit *le_mail_2;
    QLabel *label_12;
    QLineEdit *le_adresse_2;
    QLabel *label_13;
    QLineEdit *le_num_2;
    QLabel *label_14;
    QLineEdit *age;
    QLabel *label;
    QLabel *label_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1125, 711);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Employer = new QTabWidget(centralwidget);
        Employer->setObjectName(QString::fromUtf8("Employer"));
        Employer->setEnabled(true);
        Employer->setGeometry(QRect(0, 0, 1311, 1071));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Fan Heiti Std"));
        font.setPointSize(8);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(true);
        Employer->setFont(font);
        Employer->setCursor(QCursor(Qt::ArrowCursor));
        Employer->setTabletTracking(false);
        Employer->setAutoFillBackground(false);
        Employer->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 127);\n"
""));
        Employer->setDocumentMode(false);
        Employer->setTabsClosable(false);
        Employer->setMovable(false);
        Employer->setTabBarAutoHide(false);
        Gerer_2 = new QWidget();
        Gerer_2->setObjectName(QString::fromUtf8("Gerer_2"));
        label_3 = new QLabel(Gerer_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(440, 80, 171, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("8514oem"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setUnderline(false);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8(""));
        LineSupprimer_2 = new QLineEdit(Gerer_2);
        LineSupprimer_2->setObjectName(QString::fromUtf8("LineSupprimer_2"));
        LineSupprimer_2->setGeometry(QRect(620, 80, 181, 31));
        LineSupprimer_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        BoutonSupprimer_2 = new QPushButton(Gerer_2);
        BoutonSupprimer_2->setObjectName(QString::fromUtf8("BoutonSupprimer_2"));
        BoutonSupprimer_2->setGeometry(QRect(880, 80, 171, 31));
        BoutonSupprimer_2->setFont(font1);
        BoutonSupprimer_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"   border-style: solid;\n"
"   border-width: 2px;\n"
"   border-color: #9999aa;\n"
"   border-radius: 10px;\n"
"   color: black;\n"
"	background-color : qlineargradient(spread:pad, x1:0.07, y1:0.159091, x2:0.552174, y2:0.705, stop:0 rgba(36, 63, 130, 1), stop:1 rgba(114, 34, 127, 1))\n"
"   \n"
"}\n"
"QPushButton:enabled {\n"
"      background-color:qlineargradient(spread:pad, x1:0.07, y1:0.159091, x2:0.552174, y2:0.705, stop:0 rgba(36, 63, 130, 1), stop:1 rgba(114, 34, 127, 1)) ;\n"
"      color: white;\n"
"}\n"
" QPustButton:pressed{\n"
"    background-color:#c24e4e;\n"
"      color: white;\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"     background-color: #c24e4e ;\n"
"      color: white;\n"
"}\n"
" QPushButton:disabled{\n"
"     background-color: #c24e4e ;\n"
"      color: white;\n"
"}\n"
"\n"
""));
        label_4 = new QLabel(Gerer_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(440, 30, 151, 31));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8(""));
        LineChercher_2 = new QLineEdit(Gerer_2);
        LineChercher_2->setObjectName(QString::fromUtf8("LineChercher_2"));
        LineChercher_2->setGeometry(QRect(620, 30, 181, 31));
        LineChercher_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tableView_2 = new QTableView(Gerer_2);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(250, 210, 861, 431));
        tableView_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pb_gotomodifier = new QPushButton(Gerer_2);
        pb_gotomodifier->setObjectName(QString::fromUtf8("pb_gotomodifier"));
        pb_gotomodifier->setGeometry(QRect(250, 160, 171, 29));
        pb_gotomodifier->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"   border-style: solid;\n"
"   border-width: 2px;\n"
"   border-color: #9999aa;\n"
"   border-radius: 10px;\n"
"   color: black;\n"
"	background-color : qlineargradient(spread:pad, x1:0.07, y1:0.159091, x2:0.552174, y2:0.705, stop:0 rgba(36, 63, 130, 1), stop:1 rgba(114, 34, 127, 1))\n"
"   \n"
"}\n"
"QPushButton:enabled {\n"
"      background-color:qlineargradient(spread:pad, x1:0.07, y1:0.159091, x2:0.552174, y2:0.705, stop:0 rgba(36, 63, 130, 1), stop:1 rgba(114, 34, 127, 1)) ;\n"
"      color: white;\n"
"}\n"
" QPustButton:pressed{\n"
"    background-color:#c24e4e;\n"
"      color: white;\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"     background-color: #c24e4e ;\n"
"      color: white;\n"
"}\n"
" QPushButton:disabled{\n"
"     background-color: #c24e4e ;\n"
"      color: white;\n"
"}\n"
"\n"
""));
        Boutonchercher = new QPushButton(Gerer_2);
        Boutonchercher->setObjectName(QString::fromUtf8("Boutonchercher"));
        Boutonchercher->setGeometry(QRect(880, 30, 171, 31));
        Boutonchercher->setFont(font1);
        Boutonchercher->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"\n"
"   border-style: solid;\n"
"   border-width: 2px;\n"
"   border-color: #9999aa;\n"
"   border-radius: 10px;\n"
"   color: black;\n"
"	background-color : qlineargradient(spread:pad, x1:0.07, y1:0.159091, x2:0.552174, y2:0.705, stop:0 rgba(36, 63, 130, 1), stop:1 rgba(114, 34, 127, 1))\n"
"   \n"
"}\n"
"QPushButton:enabled {\n"
"      background-color:qlineargradient(spread:pad, x1:0.07, y1:0.159091, x2:0.552174, y2:0.705, stop:0 rgba(36, 63, 130, 1), stop:1 rgba(114, 34, 127, 1)) ;\n"
"      color: white;\n"
"}\n"
" QPustButton:pressed{\n"
"    background-color:#c24e4e;\n"
"      color: white;\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"     background-color: #c24e4e ;\n"
"      color: white;\n"
"}\n"
" QPushButton:disabled{\n"
"     background-color: #c24e4e ;\n"
"      color: white;\n"
"}\n"
"\n"
""));
        label_5 = new QLabel(Gerer_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(-20, -10, 251, 871));
        label_5->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/sidebar.png")));
        Employer->addTab(Gerer_2, QString());
        Ajouter_2 = new QWidget();
        Ajouter_2->setObjectName(QString::fromUtf8("Ajouter_2"));
        groupBox_2 = new QGroupBox(Ajouter_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 1121, 791));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Adobe Fan Heiti Std"));
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setUnderline(false);
        groupBox_2->setFont(font2);
        groupBox_2->setTabletTracking(false);
        groupBox_2->setAutoFillBackground(false);
        groupBox_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 127);"));
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        pb_ajouter_2 = new QPushButton(groupBox_2);
        pb_ajouter_2->setObjectName(QString::fromUtf8("pb_ajouter_2"));
        pb_ajouter_2->setGeometry(QRect(430, 570, 241, 31));
        pb_ajouter_2->setFont(font1);
        pb_ajouter_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-style: solid;\n"
"   border-width: 2px;\n"
"   border-color: #9999aa;\n"
"   border-radius: 10px;\n"
"   color: black;\n"
"	background-color : qlineargradient(spread:pad, x1:0.07, y1:0.159091, x2:0.552174, y2:0.705, stop:0 rgba(36, 63, 130, 1), stop:1 rgba(114, 34, 127, 1))\n"
"   \n"
"}\n"
"QPushButton:enabled {\n"
"      background-color:qlineargradient(spread:pad, x1:0.07, y1:0.159091, x2:0.552174, y2:0.705, stop:0 rgba(36, 63, 130, 1), stop:1 rgba(114, 34, 127, 1)) ;\n"
"      color: white;\n"
"}\n"
" QPushButton:pressed{\n"
"    background-color:#c24e4e;\n"
"      color: white;\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"     background-color: #c24e4e ;\n"
"      color: white;\n"
"}\n"
" QPushButton:disabled{\n"
"     background-color: #c24e4e ;\n"
"      color: white;\n"
"}\n"
"\n"
""));
        BoutonModifier_2 = new QPushButton(groupBox_2);
        BoutonModifier_2->setObjectName(QString::fromUtf8("BoutonModifier_2"));
        BoutonModifier_2->setGeometry(QRect(430, 610, 241, 31));
        QFont font3;
        font3.setFamily(QString::fromUtf8("8514oem"));
        BoutonModifier_2->setFont(font3);
        BoutonModifier_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   border-style: solid;\n"
"   border-width: 2px;\n"
"   border-color: #9999aa;\n"
"   border-radius: 10px;\n"
"   color: black;\n"
"	background-color : qlineargradient(spread:pad, x1:0.07, y1:0.159091, x2:0.552174, y2:0.705, stop:0 rgba(254, 84, 0, 255), stop:1 rgba(255, 255, 255, 255))\n"
"   \n"
"}\n"
"QPushButton:enabled {\n"
"      background-color:qlineargradient(spread:pad, x1:0.07, y1:0.159091, x2:0.552174, y2:0.705, stop:0 rgba(36, 63, 130, 1), stop:1 rgba(114, 34, 127, 1)) ;\n"
"      color: white;\n"
"}\n"
" QPustButton:pressed{\n"
"    background-color:#c24e4e;\n"
"      color: white;\n"
"}\n"
"QPushButton:hover:!pressed{\n"
"     background-color: #c24e4e ;\n"
"      color: white;\n"
"}\n"
" QPushButton:disabled{\n"
"     background-color: #c24e4e ;\n"
"      color: white;\n"
"}\n"
"\n"
""));
        layoutWidget_2 = new QWidget(groupBox_2);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(380, 110, 341, 451));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        ID_2 = new QLabel(layoutWidget_2);
        ID_2->setObjectName(QString::fromUtf8("ID_2"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Arial"));
        font4.setPointSize(10);
        font4.setBold(false);
        font4.setItalic(true);
        font4.setUnderline(false);
        ID_2->setFont(font4);
        ID_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(ID_2);

        le_id_2 = new QLineEdit(layoutWidget_2);
        le_id_2->setObjectName(QString::fromUtf8("le_id_2"));
        le_id_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(le_id_2);

        Nom_2 = new QLabel(layoutWidget_2);
        Nom_2->setObjectName(QString::fromUtf8("Nom_2"));
        Nom_2->setFont(font4);
        Nom_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(Nom_2);

        le_nom_2 = new QLineEdit(layoutWidget_2);
        le_nom_2->setObjectName(QString::fromUtf8("le_nom_2"));
        le_nom_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(le_nom_2);

        label_10 = new QLabel(layoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font4);
        label_10->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(label_10);

        le_prenom_2 = new QLineEdit(layoutWidget_2);
        le_prenom_2->setObjectName(QString::fromUtf8("le_prenom_2"));
        le_prenom_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(le_prenom_2);

        label_11 = new QLabel(layoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font4);
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(label_11);

        le_mail_2 = new QLineEdit(layoutWidget_2);
        le_mail_2->setObjectName(QString::fromUtf8("le_mail_2"));
        le_mail_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(le_mail_2);

        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font4);
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(label_12);

        le_adresse_2 = new QLineEdit(layoutWidget_2);
        le_adresse_2->setObjectName(QString::fromUtf8("le_adresse_2"));
        le_adresse_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(le_adresse_2);

        label_13 = new QLabel(layoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font4);
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(label_13);

        le_num_2 = new QLineEdit(layoutWidget_2);
        le_num_2->setObjectName(QString::fromUtf8("le_num_2"));
        le_num_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(le_num_2);

        label_14 = new QLabel(layoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font4);
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        verticalLayout_2->addWidget(label_14);

        age = new QLineEdit(layoutWidget_2);
        age->setObjectName(QString::fromUtf8("age"));
        age->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(age);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 30, 391, 621));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/Card.png")));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(360, 0, 381, 71));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/Tv_tally_mtarfeskhir 1.png")));
        label->raise();
        pb_ajouter_2->raise();
        BoutonModifier_2->raise();
        layoutWidget_2->raise();
        label_2->raise();
        Employer->addTab(Ajouter_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        Employer->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Supprimer par ID:", nullptr));
        BoutonSupprimer_2->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Chercher par ID:", nullptr));
        pb_gotomodifier->setText(QCoreApplication::translate("MainWindow", "Modifier", nullptr));
        Boutonchercher->setText(QCoreApplication::translate("MainWindow", "chercher", nullptr));
        label_5->setText(QString());
        Employer->setTabText(Employer->indexOf(Gerer_2), QCoreApplication::translate("MainWindow", "Gerer  spectateurs", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "AJOUTER", nullptr));
        pb_ajouter_2->setText(QCoreApplication::translate("MainWindow", "AJOUTER", nullptr));
        BoutonModifier_2->setText(QCoreApplication::translate("MainWindow", "MODIFIER", nullptr));
        ID_2->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        Nom_2->setText(QCoreApplication::translate("MainWindow", "NOM:", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "PRENOM:", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "ADRESSE MAIL:", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "ADRESSE:", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "NUM TELEPHONE:", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "AGE:", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        Employer->setTabText(Employer->indexOf(Ajouter_2), QCoreApplication::translate("MainWindow", "Ajouter spectateur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
