#include "Quaternion.h"

Quaternion::Quaternion(float x, float y, float z, float w) : m_x(x), m_y(y), m_z(z), m_w(w)
{

}

Quaternion::~Quaternion()
{
    //dtor
}

//operation de multiplication par un r�el
Quaternion::Quaternion operator*(float a)
{
    return new Quaternion(GetX() * a, GetY() * a, GetZ() * a, GetW() * a);
}

Quaternion::Quaternion operator+(Quaternion q2)
{
    return new Quaternion(1.0, 1.0, 1.0, 1.0);
}

Quaternion::Quaternion operator*(Quaternion q2)
{
    return new Quaternion(1.0, 1.0, 1.0, 1.0);
}


void Quaternion::SetX(float MaValeur){

    x = MaValeur;

}


void Quaternion::SetY(float MaValeur){

    y = MaValeur;

}

void Quaternion::SetZ(float MaValeur){

    m_z = MaValeur;

}

void Quaternion::SetW(float MaValeur){

    w = MaValeur;

}

float Quaternion::GetX(){

    return x;

}

float Quaternion::GetY(){

    return y;

}

float Quaternion::GetZ(){

    return z;

}

float Quaternion::GetW(){

    return w;

}


Quaternion::Quaternion somme(Quaternion q) {

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
