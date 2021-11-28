#ifndef FILEUTILITIES_H
#define FILEUTILITIES_H

#include <QString>
#include <QPixmap>

class FileUtilities
{
public:
    FileUtilities();

    static bool SavePixmap(QString fileName, QPixmap &pixmap);

};

#endif // FILEUTILITIES_H
