#include <QMessageBox>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QSize sh;
    sh.setWidth(55);
    sh.setHeight(15);
return;
    for (int i=0;i<24;i++)
    {
        QTableWidgetItem *item = new
        QTableWidgetItem;
        
        item->font().setPixelSize(12);
        item->setText(QString("%1").arg(i));
        
        ui->uhrzeitTable->setHorizontalHeaderItem(i, item);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::aboutQt(this);
}

void MainWindow::on_actionAbout_this_Application_triggered()
{
    QMessageBox::information(this,
        "About QtApache",
        "(c) 2018 Jens Kallup\n"
        "non-profit Software");
}

void MainWindow::on_actionAbout_Qt_triggered()
{
    QMessageBox::aboutQt(this);
}

void MainWindow::on_actionGoOnline_triggered()
{
    ui->actionGoOnline->setEnabled(false);
    ui->actionOffline ->setEnabled(true);
}

void MainWindow::on_actionOffline_triggered()
{
    ui->actionGoOnline->setEnabled(true);
    ui->actionOffline ->setEnabled(false);
}

void MainWindow::on_treeWidget_4_itemDoubleClicked(QTreeWidgetItem *item, int column)
{
    QMessageBox::information(this,tr("Information"),item->text(1));
}

void MainWindow::on_checkBox_clicked()
{
    if (ui->checkBox->isChecked())
    ui->proxyEditField->setEnabled(false); else
    ui->proxyEditField->setEnabled(true );
}

void MainWindow::on_checkBox_5_clicked()
{
    if (ui->checkBox_5->isChecked()) {
        ui->adminUserEdit->setEnabled(true);
        ui->adminPassEdit->setEnabled(true);
    }   else {
        ui->adminUserEdit->setEnabled(false);
        ui->adminPassEdit->setEnabled(false);
    }
    
}
