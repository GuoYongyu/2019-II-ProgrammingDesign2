#ifndef ENERMY_LEVEL3_H
#define ENERMY_LEVEL3_H

#include "enermy.h"

class Enermy_Level3 : public Enermy
{
public:
    Enermy_Level3() {}
    Enermy_Level3(int x, int y, int h, int w, string type);

    void show(QPainter *painter);

private:
    string _type;
    int _power;
    QImage _bullet; //打击效果
};

#endif // ENERMY_LEVEL3_H
