#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//responsável por fazer o design da classe
namespace Ui {
class MainWindow;
}

//responsável por executar as ações da aplicação
class MainWindow : public QMainWindow
{
    //necessário para fazer o tratamento de sinais
    Q_OBJECT

public:
    //construtor e destrutor
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void mataTudo();
    void copiaTexto();
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
