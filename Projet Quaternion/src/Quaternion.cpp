#include "Quaternion.h"

using namespace std;

#include <iostream>

Quaternion::Quaternion(float x, float y, float z, float w) : m_x(x), m_y(y), m_z(z), m_w(w)
{

}

Quaternion::~Quaternion()
{
    //dtor
}

//operation de multiplication par un r�el
/*Quaternion& Quaternion::operator*(float a)
{
    Quaternion q(GetX() * a, GetY() * a, GetZ() * a, GetW() * a);
    return q;
}*/


Quaternion& Quaternion::operator*(Quaternion q2)
{
    Quaternion q(1.0, 1.0, 1.0, 1.0);
    return q;
}

void Quaternion::SetX(float MaValeur){

    m_x = MaValeur;

}

void Quaternion::SetY(float MaValeur){

    m_y = MaValeur;

}

void Quaternion::SetZ(float MaValeur){

    m_z = MaValeur;

}

void Quaternion::SetW(float MaValeur){

    m_w = MaValeur;

}

float Quaternion::GetX(){

    return m_x;

}

float Quaternion::GetY(){

    return m_y;

}

float Quaternion::GetZ(){

    return m_z;

}

float Quaternion::GetW(){

    return m_w;

}

Quaternion Quaternion::somme(Quaternion q) {

    float newX(0.0);
    float newY(0.0);
    float newZ(0.0);
    float newW(0.0);

    newX = GetX() + q.GetX();
    newY = GetX() + q.GetY();
    newZ = GetZ() + q.GetZ();
    newW = GetW() + q.GetW();

    Quaternion result(newX, newY, newZ, newW);
    return result;
}

void Quaternion::displayQuaternion() const
{
    cout << "( " << m_x << ", " << m_y << ", " << m_z << ", " << m_w << ")" << endl;
}

Quaternion& Quaternion::operator+=(const Quaternion& a)
{


    m_x = m_x + a.m_x;
    m_y = m_y + a.m_y;
    m_z = m_z + a.m_z;
    m_w = m_w + a.m_w;

    return *this;


}

Quaternion operator+(Quaternion const& a, Quaternion const& b)
{


    Quaternion copie(a);
    copie += b;
    return copie;

}
