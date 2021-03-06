#ifndef TESTQUATERNION_H
#define TESTQUATERNION_H

#include <GL/gl.h>
#include <GL/glu.h>
#include "Quaternion.h"

#include "glut.h"
#include "SOIL.h"

#define ANCHOR_FROM_ORIGIN 0
#define ANCHOR_FROM_CENTER 1

#define FRONT 0
#define BACK 1
#define LEFT 2
#define RIGHT 3
#define TOP 4
#define BOT 5
#define ALL 6
#define SPHERE 7

#define TEXTURE_SCALE 1.0f

class TestQuaternion
{

    public:

        float positionX;
        float positionY;
        float positionZ;

        float longueur;

        TestQuaternion();
        TestQuaternion(float x, float y, float z, float longueur);
        virtual ~TestQuaternion();
        float* CalculBarycentre();
        void Draw();

    private:
        GLuint textures[6];
};

Quaternion GetQuaternionRotation(float angle, float axeX, float axeY, float axeZ);

Quaternion Rotate(Quaternion quaterRotate, Quaternion positionPoint);
#endif // TESTQUATERNION_H
