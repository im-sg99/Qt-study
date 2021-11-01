#ifndef MAP_H
#define MAP_H
#include <QGraphicsPixmapItem>
#include <QPainter>
#include <QPixmap>
#include <QWidget>
#include <QPainter>


class Map:public QPixmap,public QGraphicsPixmapItem{

public:
    Map();
    QPixmap getTile(int a);

protected:
    QPixmap PicMap[5];

};


#endif // PLAYER_H
