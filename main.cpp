#include "mainwindow.hpp"
#include <QApplication>
#include "pawn.hpp"
#include "game.hpp"
Game *game;

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}