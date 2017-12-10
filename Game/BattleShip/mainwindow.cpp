#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    isGame = false;

    game = new GameChild(ui->mdiArea);
    isGame = true;
    game->setWindowFlags(Qt::FramelessWindowHint);
    game->setAttribute(Qt::WA_DeleteOnClose);
    game->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setFal()
{
    if(isGame)
    {
        game->close();
        isGame = false;
    }
}
