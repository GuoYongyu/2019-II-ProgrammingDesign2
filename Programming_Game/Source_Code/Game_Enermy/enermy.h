#ifndef ENERMY_H
#define ENERMY_H

#include <QImage>
#include <QPainter>
#include <string>
#include <cmath>
#include <QMediaPlayer>
using namespace std;

class Enermy
{
public:
    Enermy() {}
    Enermy(int x, int y, int h, int w);

    int getX() const {return this->_x;}
    int getY() const {return this->_y;}
    int getH() const {return this->_height;}
    int getW() const {return this->_width;}

    void setX(int x) {_x=x;}
    void setY(int y) {_y=y;}
    void setH(int h) {_height=h;}
    void setW(int w) {_width=w;}

    int setBlood(int b) {_blood-=b;}

    bool canBit() {return this->_canbit;}

    virtual void onErase();

protected:
    int _x, _y; //图片的左上角坐标
    int _height, _width; //图片的高 宽
    int _blood; //血量
    QImage _pic; //图片
    bool _canbit; //可以打
};

#endif // ENERMY_H
