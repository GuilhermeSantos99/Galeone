#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_goButton_clicked()
{
    ui->webEngineView->load(ui->urlEdit->text());
}


void MainWindow::on_UrlEdit_returnPressed()
{
    on_goButton_clicked();
}


void MainWindow::on_webEngineView_loadStarted()
{
    ui->statusbar->showMessage("Carregando URL...");
}


void MainWindow::on_webEngineView_loadFinished(bool arg1)
{
    if(arg1)
    {
        ui->statusbar->showMessage("URL carregada");
        ui->urlEdit->setText(ui->webEngineView->url().toString());
    }
    else
    {
        ui->statusbar->showMessage("Falha ao carregar URL");
    }
}

