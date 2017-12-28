#include <QMessageBox>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
        "(c) 2017 Jens Kallup\n"
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
