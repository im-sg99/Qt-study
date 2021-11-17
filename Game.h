#ifndef GAME_H
#define GAME_H
#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include <QMainWindow>
#include <QApplication>
#include <QBrush>
#include <QFile>
#include <QTimer>
#include <QGraphicsTextItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <QPixmap>
#include <QPainter>
#include "Map.h"
#include "Player.h"
#include "Block.h"
#include "imagetest.h"


class Game: public QGraphicsView{
public:

    Game();
    void AddMap();
    void AddPlayer();
    void Blige();
    void AddBlock();

private:
    QGraphicsScene * scene;
    Player * player;
    Block * block;
    Map * map;
    imagetest * imagetest1;

};

#endif // GAME_H
