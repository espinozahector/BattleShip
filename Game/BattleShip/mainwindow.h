#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//Qt Libraries
#include <QMainWindow>

//User Libraries
#include "gamechild.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setFal();
private:
    Ui::MainWindow *ui;
    GameChild *game;
    bool isGame;
};

#endif // MAINWINDOW_H
