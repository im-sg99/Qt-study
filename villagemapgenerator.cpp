#include "villagemapgenerator.h"

#include <QGraphicsPixmapItem>
#include "fileutilities.h"

VillageMapGenerator::VillageMapGenerator()
    : VirtualMapGenerator()
{
}

int GetMax(const std::vector<std::vector<int>> &vector) {
    std::vector<int> result;

    for (int i=0; i<vector.size(); i++){
        result.insert(result.end(), vector[i].begin(), vector[i].end());
    }

    return *std::max_element(result.begin(), result.end());
}

int VillageMapGenerator::GetPixmapColumn()
{
    return 15;
}

int VillageMapGenerator::GetPixmapRow()
{
    return 13;
}

bool VillageMapGenerator::GetPixmapMatrix(std::vector<std::vector<int>> &matrix)
{
    if (m_matrix.empty())
    {
        m_matrix.clear();

        static std::vector<std::vector<int>> m(
        {
            { 2, 1,	2,	1,	2,	1,	3,	4,	3,	1,	2,	1,	2,	1,	2 },
            { 1, 2,	1,	2,	1,	2,	3,	4,	3,	2,	1,	2,	1,	2,	1 },
            { 2, 1,	2,	1,	2,	1,	5,	5,	5,	1,	2,	1,	2,	1,	2 },
            { 1, 2,	1,	2,	1,	2,	3,	4,	3,	2,	1,	2,	1,	2,	1 },
            { 2, 1,	2,	1,	2,	1,	3,	4,	3,	1,	2,	1,	2,	1,	2 },
            { 1, 2,	1,	2,	1,	2,	3,	4,	3,	2,	1,	2,	1,	2,	1 },
            { 2, 1,	2,	1,	2,	1,	3,	4,	3,	1,	2,	1,	2,	1,	2 },
            { 1, 2,	1,	2,	1,	2,	3,	4,	3,	2,	1,	2,	1,	2,	1 },
            { 2, 1,	2,	1,	2,	1,	3,	4,	3,	1,	2,	1,	2,	1,	2 },
            { 1, 2,	1,	2,	1,	2,	3,	4,	3,	2,	1,	2,	1,	2,	1 },
            { 2, 1,	2,	1,	2,	1,	5,	5,	5,	1,	2,	1,	2,	1,	2 },
            { 1, 2,	1,	2,	1,	2,	3,	4,	3,	2,	1,	2,	1,	2,	1 },
            { 2, 1,	2,	1,	2,	1,	3,	4,	3,	1,	2,	1,	2,	1,	2 }
        });

        matrix = m;
    }

    return true;
}

bool VillageMapGenerator::GetPixmaps(QLinkedList<QPixmap *> &pixmaps)
{
    bool success = GetPixmapMatrix(m_matrix);
    if (!success)
        return false;

    if (pixmaps.count() < GetMax(m_matrix))
    {
        // TODO:: need to destory elements;
        pixmaps.clear();

        auto orig = new QPixmap(":/Images/tile.png");

        auto pixmap = new QPixmap(orig->copy(QRect(0, 0, 60, 60)));
        pixmaps.append(pixmap);

        pixmap = new QPixmap(orig->copy(QRect(60, 0, 60, 60)));
        pixmaps.append(pixmap);

        pixmap = new QPixmap(orig->copy(QRect(120, 0, 60, 60)));
        pixmaps.append(pixmap);

        pixmap = new QPixmap(orig->copy(QRect(180, 0, 60, 60)));
        pixmaps.append(pixmap);

        pixmap = new QPixmap(orig->copy(QRect(240, 0, 60, 60)));
        pixmaps.append(pixmap);
    }

    return true;
}
