#ifndef VILLAGEMAPGENERATOR_H
#define VILLAGEMAPGENERATOR_H

#include "virtualmapgenerator.h"

class VillageMapGenerator : public VirtualMapGenerator
{
public:
    VillageMapGenerator();

    int GetPixmapRow() override;
    int GetPixmapColumn() override;

    bool GetPixmapMatrix(std::vector<std::vector<int>> &matrix) override;
    bool GetPixmaps(std::list<QPixmap *> &pixmaps) override;

private:
    std::vector<std::vector<int>> m_matrix;
    std::list<QPixmap *> m_pixmaps;
};

#endif // VILLAGEMAPGENERATOR_H
