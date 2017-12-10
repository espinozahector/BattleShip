#include "gamechild.h"
#include "ui_gamechild.h"

GameChild::GameChild(QWidget *parent) :
    QMdiSubWindow(parent),
    ui(new Ui::GameChild)
{
    ui->setupUi(this);
    ui->pCap->setStyleSheet("background-image: url(:/res/Images/Icons/Icon-torbjorn.png);");
    ui->Picon1->setStyleSheet("background-image: url(:/res/Images/Icons/Icon-pharah.png);");

    ui->eCap->setStyleSheet("background-image: url(:/res/Images/Icons/Icon-Roadhog.png);");
    ui->Eicon1->setStyleSheet("background-image: url(:/res/Images/Icons/Icon-genji.png);");
    crtBtns();
}

GameChild::~GameChild()
{
    delete ui;
}

void GameChild::crtBtns()
{
    buttons = new QPushButton*[100];
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            buttons[(i*j)+j] = new QPushButton(this);
            buttons[(i*j)+j]->setCheckable(true);
//            buttons[(i*j)+j]->setFlat(true);
//            buttons[(i*j)+j]->setStyleSheet("background-color: red;");
            buttons[(i*j)+j]->show();
            buttons[(i*j)+j]->setGeometry(j*78+110,i*35+365,78,35);
            connect(buttons[(i*j)+j],SIGNAL(clicked(bool)),this,SLOT(choice()));
        }
    }
}

void GameChild::choice()
{
    qDebug() << "Go in loop";
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(buttons[(i*j)+j]->isChecked())
            {
                qDebug() << "Found";
                buttons[(i*j)+j]->setChecked(false);
//                buttons[(i*j)+j]->setEnabled(false);
                buttons[(i*j)+j]->setStyleSheet("background-color: red;");

            }
        }
    }

    qDebug() << "Exited loop";
}
