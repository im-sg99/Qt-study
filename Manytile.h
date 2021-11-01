#ifndef MANYTILE_H
#define MANYTILE_H

#include <QGraphicsItem>

class ManyTile: public QGraphicsItem
{
public:
    ManyTile(int x, int y);
    void paint(QPainter *painter,const QStyleOptionGraphicsItem *item, QWidget *widget) override;

private:
    int x;
    int y;
    QList<QPointF> Tile;
    QList<QPixmap> Tile2;
};

#endif // MANYTILE_H
