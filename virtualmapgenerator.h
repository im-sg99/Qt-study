#ifndef VIRTUALMAPGENERATOR_H
#define VIRTUALMAPGENERATOR_H

#include <QLinkedList>
#include <QPixmap>
#include <QGraphicsPixmapItem>

class VirtualMapGenerator
{
public:
    VirtualMapGenerator();

    bool GetPixmapInfo(const QLinkedList<QPixmap*> &pixmaps);

protected:
    virtual int GetPixmapRow() = 0;
    virtual int GetPixmapColumn() = 0;

    virtual std::vector<std::vector<int>> GetPixmapIndexes() = 0;
    virtual QLinkedList<QPixmap *> GetPixmaps() = 0;

    virtual bool GetPixmaps(const QLinkedList<QPixmap *> &pixmaps) = 0;
private:
    int m_pixmapRow;
    int m_pixmapColumn;
};

#endif // VIRTUALMAPGENERATOR_H
