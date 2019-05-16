#include "enermy_level1.h"

Enermy_Level1::Enermy_Level1(int x, int y, int h, int w, string type):
    Enermy(x,y,h,w),_type(type)
{
    _blood=100; //初始血量
}

void Enermy_Level1::show(QPainter *painter)
{
    _pic.load(_type);
    painter->drawImage(_x,_y,_pic);
}

void Enermy_Level1::onErase()
{
    QMediaPlayer *player=new QMediaPlayer;
    player.setMeida(QUrl("")); //.......................................//
    player.setVolume(30);
    player.play();
}
