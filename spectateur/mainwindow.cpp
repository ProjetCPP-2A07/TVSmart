#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QSqlTableModel>
#include "spectator.h"
#include <QChartView>
#include<QIntValidator>
#include<QModelIndex>
#include<QModelIndex>
#include <QSqlRecord>
#include <QPrinter>
#include <QPainter>
#include <QFileDialog>
#include <QPdfWriter>
#include <QTextDocument>
#include <QtSql>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarCategoryAxis>
#include <QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QBarSeries>
#include <QBarSet>
#include <QChart>
#include <QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QLineSeries>
#include <memory>
#include <QStackedWidget>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QRegularExpressionValidator>
#include <QPdfWriter>
#include <QTextDocument>
#include <QPrinter>
#include <QFileDialog>
#include <iostream>
#include <fstream>
#include <QtSvg/QSvgRenderer>
#include<QDirModel>
#include "qrcode.h"
#include <QPainter>
using qrcodegen::QrCode;
using qrcodegen::QrSegment;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), spectator(new Spectator)
{
    ui->setupUi(this);


    connect(ui->pb_ajouter_2, SIGNAL(clicked()), this, SLOT(pb_ajouter_2()));
    connect(ui->BoutonSupprimer_2, SIGNAL(clicked()), this, SLOT(handleBoutonSupprimer2Clicked()));
    connect(ui->Ajouter_2, &QPushButton::clicked, this, &MainWindow::on_Ajouter_2_clicked);
    connect(ui->retour, &QPushButton::clicked, this, &MainWindow::on_retour_clicked);



    ui->le_id_2->setValidator( new QIntValidator(0, 99999, this));
    //ui->le_num->setValidator( new QIntValidator(20000000, 99999999 , this));
    ui->le_num_2->setValidator(new QRegExpValidator(QRegExp("^\\d{8}$"), this));
    // Populate the TableView with initial data
    QSqlTableModel *model = new QSqlTableModel(this);
    model->setTable("SPECTATEUR");
    model->select();
    ui->tableView_2->setModel(model);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_ajouter_2_clicked()
{

    // Extract data from UI elements
    ui->stackedWidget->setCurrentIndex(1);
    int cin = ui->le_id_2->text().toInt();
    QString nom = ui->le_nom_2->text();
    QString prenom = ui->le_prenom_2->text();
    QString email = ui->le_mail_2->text();
    QString adresse = ui->le_adresse_2->text();
    int phone = ui->le_num_2->text().toInt();
    int age = ui->age->text().toInt();

    //Spectator newSpectator(cin, age, phone, adresse, email, nom, prenom);
    Spectator S(cin,age,phone,adresse,email,nom,prenom);
    QRegularExpression re("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");
    QRegularExpressionMatch match = re.match(email);

    // QString num_string = QString::number(numtelephone);
    QRegularExpression re1("^(2|3|4|5|7)\\d{7}$");
   // QRegularExpressionMatch match1 = re1.match(phone);

    QRegularExpression re2("^[A-Za-z\\s]{1,20}$");
    QRegularExpressionMatch match2 = re2.match(nom);
    QRegularExpressionMatch match3 = re2.match(prenom);

    if ((!match.hasMatch()) ||  (!match2.hasMatch()) || (!match3.hasMatch())) {
        if(!match.hasMatch())
            QMessageBox::critical(this, "Error", "Invalid email format.");
        // else if(!match1.hasMatch())
          //  QMessageBox::critical(this, "Error", "Invalid numero telephone");
        else if((!match2.hasMatch()))
            QMessageBox::critical(this, "Error", "Invalid Nom format.");
        else if((!match3.hasMatch()))
            QMessageBox::critical(this, "Error", "Invalid Prenom format.");

    }

    else{
    bool test=S.ajouterSpectator();
    if(test)
    {
        QMessageBox::information(nullptr , QObject::tr("OK"),
                                 QObject::tr("Ajout effectué\n ""Click Cancel to exit."), QMessageBox::Cancel);
        ui->tableView_2->setModel(S.afficherSpectator());

        ui->le_id_2->setText("");
        ui->le_nom_2->setText("");
        ui->le_prenom_2->setText("");
        ui->le_mail_2->setText("");
        ui->le_adresse_2->setText("");
        ui->le_num_2->setText("");
        ui->age->setText("");



    }

    else
        QMessageBox::critical(nullptr , QObject::tr("Not OK"),
                              QObject::tr("Ajout non effectué.\n" " Click Cancel to exit."), QMessageBox::Cancel);
    // The email input is valid. Proceed with the confirmation.
    }
}


void MainWindow::on_BoutonSupprimer_2_clicked()
{

    if(selected_service == -1)
    {
        QMessageBox::warning(this, "Error", "Nothing is selected!");
        return;
    }

    int id = ui->tableView_2->model()->index(selected_service,0).data().toInt();

    if(S.deleteSpectator(id))
    {
        QMessageBox::information(this, "Success", "Spectator deleted successfull");
        selected_service=-1;
        ui->tableView_2->setModel(S.afficherSpectator());
    }
    else
    {
        QMessageBox::warning(this, "Error", "Error while deleting a Spectator ");
    }
}




void MainWindow::on_BoutonModifier_2_clicked()
{
    int cin = ui->le_id_2->text().toInt();
    QString nom = ui->le_nom_2->text();
    QString prenom = ui->le_prenom_2->text();
    QString email = ui->le_mail_2->text();
    QString adresse = ui->le_adresse_2->text();
    int phone = ui->le_num_2->text().toInt();
    int age = ui->age->text().toInt();

    QRegularExpression re("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");
    QRegularExpressionMatch match = re.match(email);

    // QString num_string = QString::number(numtelephone);
    QRegularExpression re1("^(2|3|4|5|7)\\d{7}$");
    // QRegularExpressionMatch match1 = re1.match(phone);

    QRegularExpression re2("^[A-Za-z\\s]{1,20}$");
    QRegularExpressionMatch match2 = re2.match(nom);
    QRegularExpressionMatch match3 = re2.match(prenom);

    if ((!match.hasMatch()) ||  (!match2.hasMatch()) || (!match3.hasMatch())) {
        if(!match.hasMatch())
            QMessageBox::critical(this, "Error", "Invalid email format.");
        // else if(!match1.hasMatch())
        //  QMessageBox::critical(this, "Error", "Invalid numero telephone");
        else if((!match2.hasMatch()))
            QMessageBox::critical(this, "Error", "Invalid Nom format.");
        else if((!match3.hasMatch()))
            QMessageBox::critical(this, "Error", "Invalid Prenom format.");

    }
    else{
    bool test=S.updateSpectator(cin,nom, prenom, email , adresse,phone ,age);
    if(test)
    {
        QMessageBox::information(nullptr , QObject::tr("OK"),
                                 QObject::tr("Modification effectué\n ""Click Cancel to exit."), QMessageBox::Cancel);
        ui->tableView_2->setModel(S.afficherSpectator());

        ui->le_id_2->setText("");
        ui->le_nom_2->setText("");
        ui->le_prenom_2->setText("");
        ui->le_mail_2->setText("");
        ui->le_adresse_2->setText("");
        ui->le_num_2->setText("");
        ui->age->setText("");


    }
    else
        QMessageBox::critical(nullptr , QObject::tr("Not OK"),
                              QObject::tr("Modification non effectué.\n" " Click Cancel to exit."), QMessageBox::Cancel);
    }
}





void MainWindow::on_tableView_2_clicked(const QModelIndex &index)
{
     selected_service = index.row();
}


void MainWindow::on_pb_gotomodifier_clicked()
{
    if(selected_service == -1)
    {
        QMessageBox::warning(this, "Error", "Nothing is selected!");
        return;
    }
    // long numtelephone=ui->le_num->text().toInt();
    ui->le_id_2->setText(ui->tableView_2->model()->index(selected_service,0).data().toString());
    ui->le_nom_2->setText(ui->tableView_2->model()->index(selected_service,1).data().toString());
    ui->le_prenom_2->setText(ui->tableView_2->model()->index(selected_service,2).data().toString());
    ui->le_mail_2->setText(ui->tableView_2->model()->index(selected_service,3).data().toString());
    ui->le_adresse_2->setText(ui->tableView_2->model()->index(selected_service,4).data().toString());
    ui->le_num_2->setText(ui->tableView_2->model()->index(selected_service,5).data().toString());
    ui->age->setText(ui->tableView_2->model()->index(selected_service,6).data().toString());

        //ui->le_passeword->setText(ui->tab_employe->model()->index(selected_service,7).data().toString());

    //ui->stackedWidget->setCurrentIndex(2);
    ui->stackedWidget->setCurrentIndex(1);
}
void MainWindow::on_pb_PDF_clicked()
{
    QString filename = QFileDialog::getSaveFileName(this, "Enregistrer le PDF", QString(), "*.pdf");
    if (filename.isEmpty()) {
        return;
    }

    QPrinter printer(QPrinter::PrinterResolution);

    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(filename);

    QPdfWriter pdfWriter(printer.outputFileName());
    pdfWriter.setPageSize(QPageSize(QPageSize::A4));
    pdfWriter.setPageOrientation(QPageLayout::Portrait);

    QTextDocument document;

    QString html = "<html><body>";
    html += "<div style='text-align:center'>";
    html += "<h1>Liste des spectateurs</h1>";
    html += "<br>";
    html += "<table  border='1' width='100%' style='margin: 0 auto; text-align: center;'>";
    html += "<tr>";
    for (int i = 0; i < ui->tableView_2->model()->columnCount(); i++) {
        html += "<th>" + ui->tableView_2->model()->headerData(i, Qt::Horizontal).toString() + "</th>";
    }
    html += "</tr>";
    for (int i = 0; i < ui->tableView_2->model()->rowCount(); i++) {
        html += "<tr>";
        for (int j = 0; j < ui->tableView_2->model()->columnCount(); j++) {
            html += "<td style='text-align:center'>" + ui->tableView_2->model()->data(ui->tableView_2->model()->index(i, j)).toString() + "</td>";
        }
        html += "</tr>";
    }
    html += "</table>";
    html += "</div>";
    html += "<br>";
    html += "<br>";
    html += "<br>";
    html += "<br>";
    html += "<br>";
    html += "<br>";
    html += "<br>";
    html += "<br>";
    html += "<div style='text-align:center'>";
    html += "</div>";
    html += "</body></html>";
    document.setHtml(html);

    document.print(&pdfWriter);

}
void MainWindow::on_BoutonTrier_clicked()
{
    Spectator S;
    ui->tableView_2->setModel(S.TriParAge());
}
void MainWindow::on_LineChercher_2_textChanged()
{
    QString rech=ui->LineChercher_2->text();
    //QString tri=ui->recherche->text();
    ui->tableView_2->setModel(S.rechercheEtTriDynamique(rech));
}
void MainWindow::on_pb_statistique_clicked()
{

    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from SPECTATEUR where age < 18 ");
    float place1=model->rowCount();
    model->setQuery("select * from SPECTATEUR where age  between 18 and 30 ");
    float place2=model->rowCount();
    model->setQuery("select * from SPECTATEUR where age > 30 ");
    float place3=model->rowCount();
    float total=place1+place2+place3;

    QString a=QString("age inferieur a 18 ans."+QString::number((place1*100)/total,'f',2)+"%" );
    QString b=QString("age entre 18 et 30 ans."+QString::number((place2*100)/total,'f',2)+"%" );
    QString c=QString("age supérieur à 30 ans."+QString::number((place3*100)/total,'f',2)+"%" );

    QtCharts::QPieSeries *series = new QtCharts::QPieSeries();
    ;//PieSeries object calculates the percentage the actual size of the slice in the chart.
    series->append(a,place1);
    series->append(b,place2);//concatiner 2 chaines
    series->append(c,place3);
    if (place1!=0)
    {QtCharts::QPieSlice *slice = series->slices().at(0);//the percentage the actual slice
        slice->setLabelVisible();
        slice->setPen(QPen(Qt::red));}
    if ( place2!=0)
    {

        QtCharts::QPieSlice *slice1 = series->slices().at(1);
        //slice1->setExploded();
        slice1->setLabelVisible();
    }
    if(place3!=0)
    {

        QtCharts::QPieSlice *slice2 = series->slices().at(2);
        //slice1->setExploded();
        slice2->setLabelVisible();
    }

    QtCharts::QChart *chart = new QtCharts::QChart();

    chart->addSeries(series); // widget
    chart->setTitle("Statistiques sur la tranche d'age des spectateurs");
    chart->legend()->hide();

    QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);//creation de la fenetre de widget
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->resize(1000,500);
    chartView->show();


}

void MainWindow::on_Ajouter_2_clicked()
{
  ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_retour_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);


}

void MainWindow::on_QR_clicked()
{
    if(ui->tableView_2->currentIndex().row()==-1)
        QMessageBox::information(nullptr, QObject::tr("Suppression"),
                                 QObject::tr("Veuillez Choisir un identifiant.\n"
                                             "Click Ok to exit."), QMessageBox::Ok);
    else
    {

        int le_id=ui->tableView_2->model()->data(ui->tableView_2->model()->index(ui->tableView_2->currentIndex().row(),0)).toInt();
        const QrCode qr = QrCode::encodeText(std::to_string(le_id).c_str(), QrCode::Ecc::LOW);
        std::ofstream myfile;
        myfile.open ("qrcode.svg") ;
        myfile << qr.toSvgString(1);
        myfile.close();
        QPixmap pix( QSize(90, 90) );
        QPainter pixPainter( &pix );
        QSvgRenderer svgRenderer(QString("qrcode.svg"));
        svgRenderer.render( &pixPainter );
        ui->QRCODE_3->setPixmap(pix);

    }
}

