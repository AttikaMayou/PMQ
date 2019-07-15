#include "testQuaternion.h"
#include"math.h"
using namespace std;

#include <iostream>

TestQuaternion::TestQuaternion(float x, float y, float z, float longueur)
{
    positionX = x;
    positionY = y;
    positionZ = z;

    this->longueur = longueur;

    for (int i = 0; i < 6; i++)
    {
        textures[i] = 0;
    }
}

TestQuaternion::TestQuaternion()
{
    positionX = 0;
    positionY = 0;
    positionZ = 0;

    this->longueur = 1;

    for (int i = 0; i < 6; i++)
    {
        textures[i] = 0;
    }
}

TestQuaternion::~TestQuaternion()
{
    //dtor
}

/*float* TestQuaternion::CalculBarycentre()
{
    float* barycentre = new float[3];
    barycentre[0] = (points[0][0] + points[1][0] + points[2][0] + points[3][0]) / 4;
    barycentre[1] = (points[0][1] + points[1][1] + points[2][1] + points[3][1]) / 4;
    barycentre[2] = (points[0][2] + points[1][2] + points[2][2] + points[3][2]) / 4;

    return barycentre;
}*/

void TestQuaternion::Draw()
{
    glEnable(GL_TEXTURE_2D);
    glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();

    glBindTexture(GL_TEXTURE_2D, textures[FRONT]);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);

    glBegin(GL_QUADS);
        glTexCoord2f(0.0f, 0.0f);
        glVertex3f(positionX, positionY, positionZ);
        glTexCoord2f(0.0f, longueur/TEXTURE_SCALE);
        glVertex3f(positionX, positionY + longueur, positionZ);
        glTexCoord2f(longueur/TEXTURE_SCALE, longueur/TEXTURE_SCALE);
        glVertex3f(positionX + longueur, positionY + longueur, positionZ);
        glTexCoord2f(longueur/TEXTURE_SCALE, 0.0f);
        glVertex3f(positionX + longueur, positionY, positionZ);
    glEnd();



    glPopMatrix();
}

Quaternion GetQuaternionRotation(float angle, float axeX, float axeY, float axeZ)
{
    Quaternion quaterRotate(cos(angle)/2, sin(angle)/2 * axeX, sin(angle)/2 * axeY, sin(angle)/2 * axeZ);
    return quaterRotate;
}

Quaternion Rotate(Quaternion quaterRotate, Quaternion positionPoint)
{
    Quaternion result = quaterRotate * positionPoint * quaterRotate.GetConjuge();
    return result;
}
