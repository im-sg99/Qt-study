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
#include "Block.h"
#include "Player.h"


class Game: public QGraphicsView{
public:
    Game();

private:
    void InitializeMap(QGraphicsScene &scene);
    void InitializePlayer();
    void Blige(QGraphicsScene &scene);

    QGraphicsScene * m_scene;
    Block * m_block;
    Map * m_map;
    Player * m_player;

};

#endif // GAME_H
