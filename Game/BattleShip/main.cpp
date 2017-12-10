#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
/*
 * ---Battle Ships(but with overwatch characters and abilities)---
 * - Board for players board and enemies board
 * - Character Select for individial ships
 * - Chat
 * - Menu
 * - Hud to show characters and if ships are alive/dead
 * - Options
 */
