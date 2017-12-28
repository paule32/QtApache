#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_actionAbout_this_Application_triggered();

    void on_actionAbout_Qt_triggered();

    void on_actionGoOnline_triggered();

    void on_actionOffline_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
