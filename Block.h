#ifndef BLOCK_H
#define BLOCK_H
#include <QPixmap>
#include <QChar>
#include <QGraphicsPixmapItem>

class Block:public QPixmap,public QGraphicsPixmapItem
{
public:
    Block();
    QPixmap getBlock(int a);

private:
    QPixmap redBlock, yellowBlock, boxBlock;
    QPixmap yellowHouse, blueHouse, redHouse;
    QPixmap tree, bush;

};

#endif // BLOCK_H
