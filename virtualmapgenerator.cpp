#include "virtualmapgenerator.h"

#include <QSaveFile>

VirtualMapGenerator::VirtualMapGenerator()
{

}

bool VirtualMapGenerator::GetPixmapInfo(const QLinkedList<QPixmap*> &pixmaps)
{
    if(!pixmaps.isEmpty()) {
        // needed elements destroying

        pixmaps.clear();
    }

    std::vector<std::vector<int>> indexes = GetPixmapIndexes();
    QLinkedList<QPixmap *> pixmaps = GetPixmaps();

    for(int r=0; r<GetPixmapRow(); r++) {
        for(int c=0; c<GetPixmapColumn(); c++) {
            int type = indexes[r][c];

            auto it = pixmaps.begin();
            std::advance(it, type-1);
            QPixmap* pixmap = *it;

            QGraphicsPixmapItem* gPixmap = new QGraphicsPixmapItem(*pixmap);
            gPixmap->setPos(c*60, r*60);

            result.append(gPixmap);
        }
    }

    return result;
}
