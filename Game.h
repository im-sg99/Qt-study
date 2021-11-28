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
#include "villagemapgenerator.h"

class Game: public QGraphicsView{
public:
    Game();

private:
    QGraphicsScene *m_scene;
    VirtualMapGenerator *m_mapgen;

    void InitializeMap(QGraphicsScene &scene);
    void InitializePlayer();
};

#endif // GAME_H
