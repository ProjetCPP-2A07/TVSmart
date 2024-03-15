#ifndef INTERFACE_EMPLOYE_H
#define INTERFACE_EMPLOYE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class interface_employe; }
QT_END_NAMESPACE

class interface_employe : public QMainWindow
{
    Q_OBJECT

public:
    interface_employe(QWidget *parent = nullptr);
    ~interface_employe();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::interface_employe *ui;
};
#endif // INTERFACE_EMPLOYE_H
