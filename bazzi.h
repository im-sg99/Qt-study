#ifndef BAZZI_H
#define BAZZI_H

#include "virtualplayer.h"

class Bazzi : public VirtualPlayer
{
public:
    Bazzi(bool useArrowKey);

protected:
    bool GetPositionPixmaps(QHash<int, QLinkedList<QGraphicsPixmapItem *> > &dict) override;

};

#endif // BAZZI_H
