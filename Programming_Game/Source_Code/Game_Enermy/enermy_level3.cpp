#include "enermy_level3.h"

Enermy_Level3::Enermy_Level3(int x, int y, int h, int w, string type):
    Enermy(x,y,h,w),_type(type)
{
    _blood=200; //初始血量
    _power=30; //初始攻击力
}

void Enermy_Level3::show(QPainter *painter)
{
    _pic.load(_type);
    _bullet.load(""); //.............................................//
    painter->drawImage(_x,_y);
}
