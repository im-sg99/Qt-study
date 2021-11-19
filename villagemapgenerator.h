#ifndef VILLAGEMAPGENERATOR_H
#define VILLAGEMAPGENERATOR_H

#include "virtualmapgenerator.h"

class VillageMapGenerator : public VirtualMapGenerator
{
public:
    VillageMapGenerator();

    int GetPixmapRow() override;
    int GetPixmapColumn() override;
    std::vector<std::vector<int>> GetPixmapIndexes() override;
    QLinkedList<QPixmap *> GetPixmaps() override;

private:
    std::vector<std::vector<int>> m_blockArray;
    QLinkedList<QPixmap *> m_pixmaps;
};

#endif // VILLAGEMAPGENERATOR_H
