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

void Quaternion::operator+=(const Quaternion& a)
{
    m_x += a.GetX();

}

//operation de multiplication par un reel
Quaternion operator*(Quaternion const& q, float a)
{
    Quaternion result(q.GetX() * a, q.GetY() * a, q.GetZ() * a, q.GetW() * a);
    return result;
}

Quaternion operator+(Quaternion const& q2)
{
    Quaternion q(1.0, 1.0, 1.0, 1.0);
    return q;
}

Quaternion operator*(Quaternion const& q, Quaternion const& q2)
{
    Quaternion result;
    result = q.multiply(q2);
    return result;
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

Quaternion Quaternion::multiply(Quaternion q2)
{
    float newX(0.0);
    float newY(0.0);
    float newZ(0.0);
    float newW(0.0);

    newX = (GetX() * q2.GetX()) - (GetY() * q2.GetY()) - (GetZ() * q2.GetZ()) - (GetW() * q2.GetW());
    newY = (GetX() * q2.GetY()) + (GetY() * q2.GetX()) + (GetZ() * q2.GetW()) - (GetW() * q2.GetZ());
    newZ = (GetX() * q2.GetZ()) + (GetZ() * q2.GetX()) - (GetY() * q2.GetW()) + (GetW() * q2.GetY());
    newW = (GetX() * q2.GetW()) + (GetW() * q2.GetX()) + (GetY() * q2.GetZ()) - (GetZ() * q2.GetY());

    Quaternion result(newX, newY, newZ, newW);
    return result;
}

Quaternion Quaternion::multiply(float a)
{
    float newX(0.0);
    float newY(0.0);
    float newZ(0.0);
    float newW(0.0);

    newX = (GetX() * q2.GetX()) - (GetY() * q2.GetY()) - (GetZ() * q2.GetZ()) - (GetW() * q2.GetW());
    newY = (GetX() * q2.GetY()) + (GetY() * q2.GetX()) + (GetZ() * q2.GetW()) - (GetW() * q2.GetZ());
    newZ = (GetX() * q2.GetZ()) + (GetZ() * q2.GetX()) - (GetY() * q2.GetW()) + (GetW() * q2.GetY());
    newW = (GetX() * q2.GetW()) + (GetW() * q2.GetX()) + (GetY() * q2.GetZ()) - (GetZ() * q2.GetY());

    Quaternion result(newX, newY, newZ, newW);
    return result;
}

void Quaternion::displayQuaternion() const
{
    cout << "( " << m_x << ", " << m_y << ", " << m_z << ", " << m_w << ")" << endl;
}

bool operator==(Quaternion const& a, Quaternion const& b)
{
    return (a.GetX() == b.GetX() && a.GetY() == b.GetY() && a.GetZ() == b.GetZ() && a.GetW() == b.GetW());
}
