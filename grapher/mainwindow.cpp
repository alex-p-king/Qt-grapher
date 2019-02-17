#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

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
    qDebug() << "Submitting data..";
    //output first name, last name, and message that user inputs
    qDebug() << "First name is :" << ui->firstNameLineEdit->text();
    qDebug() << "Last name is :" << ui->lastNameLineEdit->text();
    qDebug() << "Message is :" << ui->messageTextEdit->toPlainText();
}
