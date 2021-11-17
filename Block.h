#ifndef BLOCK_H
#define BLOCK_H
#include <QGraphicsPixmapItem>
#include <QPainter>
#include <QPixmap>
#include <QWidget>
#include <QPainter>

class Block:public QPixmap,public QGraphicsPixmapItem{

public:
    Block();
    QPixmap getBlock(int a);

protected:
    QPixmap pixmapblock[8];
};

#endif
