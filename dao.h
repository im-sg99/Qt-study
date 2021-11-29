#ifndef DAO_H
#define DAO_H

#include "virtualplayer.h"

class Dao : public VirtualPlayer
{
public:
    Dao(bool useArrowKey);

protected:
    bool GetPositionPixmaps(QHash<int, std::list<QGraphicsPixmapItem*>> &dict) override;
};

#endif // DAO_H
