#include "Quaternion.h"

Quaternion::Quaternion(float x, float y, float z, float w)
{

    x = x;
    y = y;
    z = z;
    w = w;

}

Quaternion::~Quaternion()
{
    //dtor
}

//operation de multiplication par un r�el
Quaternion::operator*(float a)
{

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

Quaternion::GetX(){

    return x;

}

Quaternion::GetY(){

    return y;

}

Quaternion::GetZ(){

    return z;

}

Quaternion::GetW(){

    return w;

}


Quaternion somme(Quaternion q) {

    float newX;
    float newY;
    float newZ;
    float newW;

    newX = x + q.GetX();
    newY = y + q.GetY();
    newZ = z + q.GetZ();
    newW = w + q.GetW();

    return new Quaternion(newX, newY, newZ, newW);

}
