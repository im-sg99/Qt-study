#include "virtualmapgenerator.h"

VirtualMapGenerator::VirtualMapGenerator()
{

}

bool VirtualMapGenerator::AddPixmapInfo(QGraphicsScene &scene)
{
    std::vector<std::vector<int>> matrix;
    bool success = GetPixmapMatrix(matrix);
    if (!success)
        return false;

    std::list<QPixmap*> pixmaps;
    success = GetPixmaps(pixmaps);
    if (!success)
        return false;

    for(int r=0; r<GetPixmapRow(); r++) {
        for(int c=0; c<GetPixmapColumn(); c++) {
            int type = matrix[r][c];

            auto it = pixmaps.begin();
            std::advance(it, type-1);
            QPixmap* pixmap = *it;

            auto gPixmap = scene.addPixmap(pixmap->copy());
            gPixmap->setPos(c*60, r*60);
        }
    }

    return true;
}
