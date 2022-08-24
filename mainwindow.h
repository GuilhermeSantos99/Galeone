#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_goButton_clicked();

    void on_UrlEdit_returnPressed();

    void on_webEngineView_loadStarted();

    void on_webEngineView_loadFinished(bool arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
