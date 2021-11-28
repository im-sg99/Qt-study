#ifndef BLOCK_H
#define BLOCK_H
#include <QGraphicsPixmapItem>
#include <QPainter>
#include <QPixmap>
#include <QWidget>
#include <QPainter>

class Block:public QPixmap,public QGraphicsPixmapItem{

public:
    const int PixmapRow = 13;
    const int PixmapColumn = 15;

    Block();
    QPixmap getBlock(int a);
    int* GetPixmapInfo();

protected:
    QPixmap pixmapblock[8];
};

#endif
