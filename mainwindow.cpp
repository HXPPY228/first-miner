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

void MainWindow::on_pushButton_clicked()
{
    int a = ui->progressBar->value();
    a++;
    ui->progressBar->setValue(a);
    if (a==100){
        ui->label->setText("Майнер успешно установлен!");
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    int a = ui->progressBar->value();
    if (a>95&&a<100){
        a=100;
    }else{
    a+=5;
    }
    ui->progressBar->setValue(a);
    if (a==100){
        ui->label->setText("Майнер успешно установлен!");
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    int a = ui->progressBar->value();
    a--;
    ui->progressBar->setValue(a);
    if (a!=100){
        ui->label->setText(" ");
    }
}

