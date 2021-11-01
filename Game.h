#ifndef GAME_H
#define GAME_H
#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include <QMainWindow>
#include <QApplication>
#include <QKeyEvent>
#include <QPixmap>
#include <QPainter>
#include <QDockWidget>
#include <QTextEdit>
#include <QTextStream>
#include <QBrush>

#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include <QGraphicsPixmapItem>
#include <QGraphicsRectItem>
#include <QIcon>

#include "Map.h"
#include "Player.h"

#include "imagetest.h"


class Game: public QGraphicsView{
public:

    Game();
    void AddMap();
    void AddPlayer();
    void Blige();
    QGraphicsScene * scene;
    Player * player;
    Map * map;
    imagetest * imagetest1;


private:

};

#endif // GAME_H
