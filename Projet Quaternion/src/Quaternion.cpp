#include "Quaternion.h"

Quaternion::Quaternion()
{
    //ctor
}

Quaternion::~Quaternion()
{
    //dtor
}


Quaternion::SetX(float MaValeur){

    x = MaValeur;

}


Quaternion::SetY(float MaValeur){

    y = MaValeur;

}

Quaternion::SetZ(float MaValeur){

    z = MaValeur;

}

Quaternion::SetW(float MaValeur){

    w = MaValeur;

}

Quaternion::GetX(float MaValeur){

    return x;

}

Quaternion::GetY(float MaValeur){

    return y;

}

Quaternion::GetZ(float MaValeur){

    return z;

}

Quaternion::GetW(float MaValeur){

    return w;

}


Quaternion somme(Quaternion q, Quaternion q2) {

    float newX;
    float newY;
    float newZ;
    float newW;

    newX = q.GetX() + q2.GetX();
    newY = q.GetY() + q2.GetY();
    newZ = q.GetZ() + q2.GetZ();
    newW = q.GetW() + q2.GetW();

    return new Quaternion();



}
