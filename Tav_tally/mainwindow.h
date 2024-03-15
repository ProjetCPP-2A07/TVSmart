#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "gs_studio.h"
#include <QSqlQueryModel>
#include <QTableView>
#include <QStandardItemModel>
#include <QDateTime>
#include <QMessageBox>
#include <QSqlDatabase>
#include "sponsor.h"
#include <QSqlQueryModel>
#include <QTableView>
#include"connection.h"
#include <QSortFilterProxyModel>
#include "spectator.h"
#include"employe.h"
#include<QMessageBox>
#include "emission.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_stidio_clicked();
    void on_pushButton_7_clicked();
    void on_pushButton_9_clicked();
    void on_pushButton_8_clicked();
    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_spon_clicked();

    void on_ajoutersponsor_2_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_23_clicked();

    void on_ref_clicked();

    void on_rechercher_clicked();

    void on_trier_clicked();

    void on_pushButton_spectateur_clicked();

    void on_pb_ajouter_2_clicked();

    void on_BoutonSupprimer_2_clicked();

    void on_BoutonModifier_2_clicked();

    void on_pb_gotomodifier_clicked();

    void on_tablespect_clicked(const QModelIndex &index);

    void on_pushButton_clicked();

    void on_pushButton_empole_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_showList_em_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_18_clicked();

    void on_done_clicked();

    void on_pushButton_confirmer_clicked();

    void on_rechh_clicked();

    void on_recherche_emm_clicked();

    void on_pushButton_19_clicked();


    void on_rech_2_textChanged(const QString &arg1);

    void on_pushButton_45_clicked();

private:
    Ui::MainWindow *ui;
    gs_studio G;
    sponsor S;
    QSortFilterProxyModel *proxyModel;
    Emission Em;
    Spectator S1;    static const int ID_COLUMN_INDEX = 0;
    int selected_service =-1;

};
#endif // MAINWINDOW_H
