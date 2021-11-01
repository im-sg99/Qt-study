#include "Manytile.h"

#include <QPainter>
#include <QStyleOptionGraphicsItem>

ManyTile::ManyTile(int x, int y)
{
    this->x = x;
    this->y = y;

    setFlags(ItemIsFocusable);

}
void ManyTile::paint(QPainter *painter,const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(widget);



        QBrush b = painter->brush();

        painter->drawRect(13, 13, 97, 57);
        painter->setBrush(b);
        return;
}


