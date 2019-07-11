#include "testQuaternion.h"

using namespace std;

#include <iostream>

TestQuaternion::TestQuaternion(float x, float y, float z, float longueur)
{
    positionX = x;
    positionY = y;
    positionZ = z;

    this->longueur = longueur;

    points[0][0] = x - longueur/2;
    points[0][1] = y - longueur/2;
    points[0][2] = positionZ;

    points[1][0] = x + longueur/2;
    points[1][1] = y - longueur/2;
    points[1][2] = positionZ;

    points[2][0] = x + longueur/2;
    points[2][1] = y + longueur/2;
    points[2][2] = positionZ;

    points[3][0] = x - longueur/2;
    points[3][1] = y + longueur/2;
    points[3][2] = positionZ;
}

TestQuaternion::TestQuaternion()
{
    positionX = 0;
    positionY = 0;
    positionZ = 0;

    this->longueur = 1;

    points[0][0] = -1/2;
    points[0][1] = -1/2;
    points[0][2] = positionZ;

    points[1][0] = 1/2;
    points[1][1] = -1/2;
    points[1][2] = positionZ;

    points[2][0] = 1/2;
    points[2][1] = 1/2;
    points[2][2] = positionZ;

    points[3][0] = -1/2;
    points[3][1] = 1/2;
    points[3][2] = positionZ;
}

TestQuaternion::~TestQuaternion()
{
    //dtor
}

float* TestQuaternion::CalculBarycentre()
{
    float* barycentre = new float[3];
    barycentre[0] = (points[0][0] + points[1][0] + points[2][0] + points[3][0]) / 4;
    barycentre[1] = (points[0][1] + points[1][1] + points[2][1] + points[3][1]) / 4;
    barycentre[2] = (points[0][2] + points[1][2] + points[2][2] + points[3][2]) / 4;

    return barycentre;
}

void TestQuaternion::Draw()
{
    glEnable(GL_TEXTURE_2D);
    glColor3f(1.0f, 1.0f, 1.0f);
    glPushMatrix();

    //if (anchor[0]) glTranslatef(-x/2, 0.0f, 0.0f);
    //if (anchor[1]) glTranslatef(0.0f, -y/2, 0.0f);
    //if (anchor[2]) glTranslatef(0.0f, 0.0f, -z/2);

    glBindTexture(GL_TEXTURE_2D, textures[FRONT]);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_LINEAR);

    glBegin(GL_QUADS);
        //glTexCoord2f(0.0f, 0.0f);
        glVertex3f(points[0][0], points[0][1], points[0][2]);
        //glTexCoord2f(0.0f, y/TEXTURE_SCALE);
        glVertex3f(points[1][0], points[1][1], points[1][2]);
       // glTexCoord2f(x/TEXTURE_SCALE, y/TEXTURE_SCALE);
        glVertex3f(points[2][0], points[2][1], points[2][2]);
        //glTexCoord2f(x/TEXTURE_SCALE, 0.0f);
        glVertex3f(points[3][0], points[3][1], points[3][2]);
    glEnd();
}

