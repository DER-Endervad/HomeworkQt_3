#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->centralwidget->setStyleSheet(" background-color: DimGray");
    ui->label->setStyleSheet("color : White");
    ui->label_2->setStyleSheet("color : White");
    ui->pushButton->setStyleSheet("color : White");
    ui->pushButton_2->setStyleSheet("color : White");
    ui->textEdit->setStyleSheet("color : White");
    ui->textEdit_2->setStyleSheet("color : White");
    ui->textEdit_3->setStyleSheet("color : White");

    ui->stat_lb->setStyleSheet("color : LightGrey");
    ui->stat_lb_2->setStyleSheet("color : LightGrey");
    ui->stat_lb_3->setStyleSheet("color : LightGrey");
    ui->stat_spin->setStyleSheet("color : LightGrey");
    ui->stat_spin_2->setStyleSheet("color : LightGrey");
}

MainWindow::~MainWindow()
{
    delete ui;
}

