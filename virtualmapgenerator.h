#ifndef VIRTUALMAPGENERATOR_H
#define VIRTUALMAPGENERATOR_H

#include <list>
#include <QPixmap>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>

class VirtualMapGenerator
{
public:
    VirtualMapGenerator();

    bool AddPixmapInfo(QGraphicsScene &scene);

protected:
    virtual int GetPixmapRow() = 0;
    virtual int GetPixmapColumn() = 0;

    virtual bool GetPixmapMatrix(std::vector<std::vector<int>> &matrix) = 0;
    virtual bool GetPixmaps(std::list<QPixmap *> &pixmaps) = 0;
private:
    int m_pixmapRow;
    int m_pixmapColumn;
};

#endif // VIRTUALMAPGENERATOR_H
