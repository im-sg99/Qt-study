#ifndef VIRUTALPLAYER_H
#define VIRUTALPLAYER_H

#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <QKeyEvent>
#include <QHash>
#include <vector>

class VirtualPlayer : public QGraphicsPixmapItem
{
public:
    VirtualPlayer(bool useArrowKey);

    void keyPressEvent(QKeyEvent *event);

protected:
    const int Speed = 5;

    virtual bool GetPositionPixmaps(QHash<int, std::list<QGraphicsPixmapItem*>> &dict) = 0;

private:
    bool m_useArrowKey;
};

#endif // VIRUTALPLAYER_H
