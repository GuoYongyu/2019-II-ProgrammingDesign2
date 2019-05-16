#include "enermy_level2.h"

Enermy_Level2::Enermy_Level2(int x, int y, int h, int w, string type):
    Enermy(x,y,h,w),_type(type)
{
    _blood=200; //初始血量
}

void Enermy_Level2::show(QPainter *painter)
{
    _pic.load(_type);
    painter->drawImage(_x,_y,_pic);
}

void Enermy_Level2::onErase()
{
    QMediaPlayer *player=new QMediaPlayer;
    player.setMeida(QUrl("")); //.......................................//
    player.setVolume(30);
    player.play();
}
