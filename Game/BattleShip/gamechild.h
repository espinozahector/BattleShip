#ifndef GAMECHILD_H
#define GAMECHILD_H

#include <QMdiSubWindow>
#include <QPushButton>
#include <QDebug>

namespace Ui {
class GameChild;
}

class GameChild : public QMdiSubWindow
{
    Q_OBJECT

public:
    explicit GameChild(QWidget *parent = 0);
    ~GameChild();
    void crtBtns(); //Create the grid buttons
    QPushButton **buttons;
private:
    Ui::GameChild *ui;
public slots:
    void choice();
};

#endif // GAMECHILD_H
