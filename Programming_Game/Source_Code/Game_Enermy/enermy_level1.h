#ifndef ENERMY_LEVEL1_H
#define ENERMY_LEVEL1_H

#include "enermy.h"

class Enermy_Level1 : public Enermy
{
public:
    Enermy_Level1() {}
    Enermy_Level1(int x, int y, int h, int w, string type);

    void show(QPainter *painter);

private:
    string _type; //路径名
};

#endif // ENERMY_LEVEL1_H
