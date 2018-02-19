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
    void on_Client_clicked();

    void on_startThreadedServer_clicked();

private:
    Ui::MainWindow *ui;
    QWidget *wdg;
};

#endif // MAINWINDOW_H
