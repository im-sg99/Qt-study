#ifndef ANIMATION_H
#define ANIMATION_H
#include <QPropertyAnimation>
#include <QSequentialAnimationGroup>
#include <QParallelAnimationGroup>
#include <QLabel>

class animation:public QLabel
{
public:

    QLabel *pLabel;
    QParallelAnimationGroup *pGroup;
    void parallelAnimationGroup();

    ;
};

#endif // ANIMATION_H
