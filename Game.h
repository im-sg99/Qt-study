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
#include "Block.h"
#include "Player.h"
#include "virtualmapgenerator.h"
#include "virtualplayer.h"

class Game: public QGraphicsView{
public:
    Game();

private:
    QGraphicsScene *m_scene;
    VirtualMapGenerator *m_mapgen;

    VirtualPlayer *m_player1;
    VirtualPlayer *m_player2;

    Block * m_block;

    void InitializeMap(QGraphicsScene &scene);
    void InitializeBlock(QGraphicsScene &scene);
    void InitializePlayer(QGraphicsScene &scene);
};

#endif // GAME_H
