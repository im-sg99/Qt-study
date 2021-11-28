#include "virtualplayer.h"

VirtualPlayer::VirtualPlayer(bool useArrowKey)
    : QGraphicsPixmapItem()
{
    m_useArrowKey = useArrowKey;
    setFlag(QGraphicsItem::ItemIsFocusable);
}

void VirtualPlayer::keyPressEvent(QKeyEvent *event)
{
    int pressedKey = event->key();

    if (m_useArrowKey) {
        switch(pressedKey) {
        case Qt::Key_A:
            setPos(x()-Speed, y());
            break;

        case Qt::Key_D:
            setPos(x()+Speed, y());
            break;

        case Qt::Key_W:
            setPos(x(), y()-Speed);
            break;

        case Qt::Key_S:
            setPos(x(), y()+Speed);
            break;

        default:
            break;
        }
    }
    else {
        switch(pressedKey) {
        case Qt::Key_Left:
            setPos(x()-Speed, y());
            break;

        case Qt::Key_Right:
            setPos(x()+Speed, y());
            break;

        case Qt::Key_Up:
            setPos(x(), y()-Speed);
            break;

        case Qt::Key_Down:
            setPos(x(), y()+Speed);
            break;

        default:
            break;
        }
    }
}
