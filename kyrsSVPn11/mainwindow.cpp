#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    model = new QStandardItemModel(0,2,this);
    ui->tableView->setModel( model);
    model->setHeaderData(0, Qt::Horizontal, "Позиция зуба");
     model->setHeaderData(1, Qt::Horizontal, "Дата прорезывания");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    model->insertRow(model->rowCount());
}


void MainWindow::on_pushButton_2_clicked()
{
     model->removeRow(row); // УДАЛЕНИЕ ТАБЛИЦЫ
}


void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
}

