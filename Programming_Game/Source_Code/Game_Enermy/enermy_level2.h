#ifndef ENERMY_LEVEL2_H
#define ENERMY_LEVEL2_H

#include "enermy.h"

class Enermy_Level2 : public Enermy
{
public:
    Enermy_Level2() {}
    Enermy_Level2(int x, int y, int h, int w, string type);

    void show(QPainter *painter);

private:
    string _type;
};

#endif // ENERMY_LEVEL2_H
