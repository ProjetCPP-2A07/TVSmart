/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_4;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *page_2;
    QLabel *label_5;
    QWidget *studios;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label_10;
    QLineEdit *rech_2;
    QTableView *tab_stud;
    QPushButton *pushButton_10;
    QPushButton *pushButton_3;
    QLabel *label_6;
    QPushButton *pushButton_spon;
    QLabel *label_7;
    QPushButton *pushButton_stidio;
    QLabel *label_8;
    QPushButton *pushButton_spectateur;
    QPushButton *pushButton_empole;
    QLabel *label_9;
    QGroupBox *groupBox;
    QLabel *label_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QPushButton *pushButton_spectateur_2;
    QLabel *label_12;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1678, 902);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-30, 0, 270, 981));
        label->setStyleSheet(QStringLiteral("background:url(\"C:/Users/dhaou/Desktop/qt//backg.png\");"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(29, 365, 31, 31));
        label_4->setStyleSheet(QStringLiteral("border-image: url(:/em.png);"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(240, 0, 1441, 901));
        stackedWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        stackedWidget->setToolTipDuration(-1);
        stackedWidget->setLayoutDirection(Qt::LeftToRight);
        stackedWidget->setStyleSheet(QStringLiteral("background-image: url(:/Studios.png);"));
        stackedWidget->setLineWidth(1);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        pushButton_2 = new QPushButton(page);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 220, 75, 23));
        pushButton_4 = new QPushButton(page);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(350, 220, 75, 23));
        pushButton_5 = new QPushButton(page);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(380, 310, 75, 23));
        pushButton_6 = new QPushButton(page);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(180, 320, 75, 23));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(260, 200, 381, 91));
        stackedWidget->addWidget(page_2);
        studios = new QWidget();
        studios->setObjectName(QStringLiteral("studios"));
        pushButton_7 = new QPushButton(studios);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(1250, 50, 151, 51));
        pushButton_7->setCursor(QCursor(Qt::ArrowCursor));
        pushButton_7->setFocusPolicy(Qt::ClickFocus);
        pushButton_7->setStyleSheet(QLatin1String("\n"
"QPushButton:hover{\n"
" \n"
"	color: rgb(0, 0, 0);\n"
"\n"
"}\n"
"QPushButton{\n"
"background:url(\"C:/Users/dhaou/Desktop/qt/Rectangle 1.png\");\n"
"color: rgb(255, 255, 255);\n"
"font: 11pt \"MS Shell Dlg 2\";\n"
"border-radius:10px;\n"
"border: none;\n"
"}\n"
""));
        pushButton_8 = new QPushButton(studios);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(1210, 140, 51, 41));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton:hover{\n"
"	border-image: url(:/Trash2.png);\n"
"\n"
"}\n"
"QPushButton{\n"
"border-radius:10px;\n"
"border-image: url(:/trash.png);\n"
"border: none;\n"
"}\n"
""));
        pushButton_9 = new QPushButton(studios);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(1150, 140, 41, 41));
        pushButton_9->setStyleSheet(QLatin1String("\n"
"\n"
"QPushButton:hover{\n"
"\n"
"	border-image: url(:/pen2.png);\n"
"\n"
"}\n"
"QPushButton{\n"
"border-radius:10px;\n"
"border-image: url(:/pen.png);\n"
"border: none;\n"
"}\n"
""));
        label_10 = new QLabel(studios);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(1090, 70, 31, 31));
        label_10->setStyleSheet(QStringLiteral("border-image: url(:/scroller.png);"));
        rech_2 = new QLineEdit(studios);
        rech_2->setObjectName(QStringLiteral("rech_2"));
        rech_2->setGeometry(QRect(290, 60, 761, 51));
        rech_2->setToolTipDuration(-1);
        rech_2->setLayoutDirection(Qt::LeftToRight);
        rech_2->setStyleSheet(QLatin1String("background-color: rgba(0, 0, 0, 0);\n"
"color: rgb(0,0,0);\n"
"font: 18pt \"MS Shell Dlg 2\";\n"
"border-radius:14px;\n"
"border: none;\n"
""));
        rech_2->setEchoMode(QLineEdit::Normal);
        rech_2->setCursorPosition(0);
        tab_stud = new QTableView(studios);
        tab_stud->setObjectName(QStringLiteral("tab_stud"));
        tab_stud->setGeometry(QRect(95, 191, 1161, 641));
        tab_stud->setStyleSheet(QLatin1String("QTableView\n"
"{\n"
"	background-color: rgb(255, 255, 255);\n"
"	border: none;\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"QTableView::item:selected\n"
"{\n"
"	color:white;\n"
"	background-color: rgb(93, 93, 93);\n"
"	border: none;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"	border: none;\n"
"	background-color: qlineargradient(spread:pad, x1:0.989474, y1:0.977, x2:0.0214737, y2:0.085, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(255, 255, 255, 0));\n"
"	color: rgb(172, 172, 172);\n"
"}"));
        tab_stud->setSelectionBehavior(QAbstractItemView::SelectRows);
        pushButton_10 = new QPushButton(studios);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(250, 60, 41, 41));
        pushButton_10->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 5));\n"
"image: url(:/Loupe.png);\n"
"\n"
"border: none;"));
        stackedWidget->addWidget(studios);
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(74, 302, 111, 31));
        QFont font;
        font.setFamily(QStringLiteral("MS Sans Serif"));
        font.setPointSize(12);
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: rgba(0, 0, 113, 0); \n"
"border: none;\n"
"border-radius:10px;\n"
"color:white;}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 0, 0); \n"
"\n"
"}"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 430, 21, 21));
        label_6->setStyleSheet(QStringLiteral("border-image: url(:/spon.png);"));
        pushButton_spon = new QPushButton(centralwidget);
        pushButton_spon->setObjectName(QStringLiteral("pushButton_spon"));
        pushButton_spon->setGeometry(QRect(74, 430, 101, 31));
        pushButton_spon->setFont(font);
        pushButton_spon->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_spon->setFocusPolicy(Qt::ClickFocus);
        pushButton_spon->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: rgba(0, 0, 113, 0); \n"
"border: none;\n"
"border-radius:10px;\n"
"color:white;}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 0, 0); \n"
"\n"
"}"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 480, 21, 21));
        label_7->setStyleSheet(QStringLiteral("border-image: url(:/stidio.png);"));
        pushButton_stidio = new QPushButton(centralwidget);
        pushButton_stidio->setObjectName(QStringLiteral("pushButton_stidio"));
        pushButton_stidio->setGeometry(QRect(70, 480, 111, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Sans Serif"));
        font1.setPointSize(14);
        pushButton_stidio->setFont(font1);
        pushButton_stidio->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: rgba(0, 0, 113, 0); \n"
"border: none;\n"
"border-radius:10px;\n"
"color:white;}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 0, 0); \n"
"\n"
"}"));
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(35, 536, 20, 21));
        label_8->setStyleSheet(QStringLiteral("border-image: url(:/spectateur.png);"));
        pushButton_spectateur = new QPushButton(centralwidget);
        pushButton_spectateur->setObjectName(QStringLiteral("pushButton_spectateur"));
        pushButton_spectateur->setGeometry(QRect(64, 532, 121, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("MS Sans Serif"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_spectateur->setFont(font2);
        pushButton_spectateur->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: rgba(0, 0, 113, 0); \n"
"border: none;\n"
"border-radius:10px;\n"
"color:white;}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 0, 0); \n"
"\n"
"}"));
        pushButton_empole = new QPushButton(centralwidget);
        pushButton_empole->setObjectName(QStringLiteral("pushButton_empole"));
        pushButton_empole->setGeometry(QRect(74, 370, 111, 31));
        pushButton_empole->setFont(font2);
        pushButton_empole->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: rgba(0, 0, 113, 0); \n"
"border: none;\n"
"border-radius:10px;\n"
"color:white;}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 0, 0); \n"
"\n"
"}"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 20, 147, 147));
        label_9->setStyleSheet(QStringLiteral("background:url(\"C:/Users/dhaou/Desktop/qt/dar.png\");"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 190, 201, 551));
        groupBox->setStyleSheet(QStringLiteral("border: none;"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 60, 21, 21));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/home.png);"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 50, 111, 31));
        pushButton->setFont(font1);
        pushButton->setCursor(QCursor(Qt::BlankCursor));
        pushButton->setFocusPolicy(Qt::ClickFocus);
        pushButton->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: rgba(0, 0, 113, 0); \n"
"border: none;\n"
"border-radius:10px;\n"
"color:white;}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 0, 0); \n"
"\n"
"}"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 120, 21, 21));
        label_3->setStyleSheet(QStringLiteral("border-image: url(:/emm.png);"));
        pushButton_spectateur_2 = new QPushButton(groupBox);
        pushButton_spectateur_2->setObjectName(QStringLiteral("pushButton_spectateur_2"));
        pushButton_spectateur_2->setGeometry(QRect(10, 500, 121, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Lucida Sans Typewriter"));
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        pushButton_spectateur_2->setFont(font3);
        pushButton_spectateur_2->setStyleSheet(QLatin1String("QPushButton{\n"
"background-color: rgba(0, 0, 113, 0); \n"
"border: none;\n"
"border-radius:10px;\n"
"color:white;}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"background-color: rgb(255, 0, 0); \n"
"\n"
"}"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(139, 500, 31, 31));
        label_12->setStyleSheet(QStringLiteral("border-image: url(:/log_out.png);"));
        MainWindow->setCentralWidget(centralwidget);
        label->raise();
        stackedWidget->raise();
        label_9->raise();
        groupBox->raise();
        pushButton_stidio->raise();
        label_8->raise();
        pushButton_3->raise();
        label_4->raise();
        pushButton_empole->raise();
        pushButton_spon->raise();
        pushButton_spectateur->raise();
        label_6->raise();
        label_7->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1678, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        label_4->setText(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "PushButton", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "HELLLLLOOOOOO", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "Ajouter un studio", Q_NULLPTR));
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        label_10->setText(QString());
#ifndef QT_NO_TOOLTIP
        rech_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        rech_2->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        rech_2->setText(QString());
        pushButton_10->setText(QString());
        pushButton_3->setText(QApplication::translate("MainWindow", "Emissions", Q_NULLPTR));
        label_6->setText(QString());
        pushButton_spon->setText(QApplication::translate("MainWindow", "Sponsors", Q_NULLPTR));
        label_7->setText(QString());
        pushButton_stidio->setText(QApplication::translate("MainWindow", "Studios", Q_NULLPTR));
        label_8->setText(QString());
        pushButton_spectateur->setText(QApplication::translate("MainWindow", "Spectateurs", Q_NULLPTR));
        pushButton_empole->setText(QApplication::translate("MainWindow", "Employe(\303\251)s", Q_NULLPTR));
        label_9->setText(QString());
        groupBox->setTitle(QString());
        label_2->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Home", Q_NULLPTR));
        label_3->setText(QString());
        pushButton_spectateur_2->setText(QApplication::translate("MainWindow", "Logout", Q_NULLPTR));
        label_12->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
