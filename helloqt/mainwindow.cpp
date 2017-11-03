#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) //cria uma nova ui
{
    ui->setupUi(this); //define a ui

    //connect(objeto que realiza a ação, evento a ser realizado
    //objeto que vai receber o sinal, função que vai tratar o evento)
    connect(ui->pushButtonQuit,SIGNAL(clicked(bool)),this,SLOT(mataTudo()));
}

MainWindow::~MainWindow()
{
    delete ui;
    //libera a memória alocada previamente
}

void MainWindow::mataTudo()
{
    exit(0);
}

void MainWindow::copiaTexto()
{
    ui->textBrowser->setText(ui->textEdit->toPlainText());
}
