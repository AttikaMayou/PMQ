#include <iostream>

#include <GL/gl.h>
#include <GL/glu.h>

//#include "glut.h"
//#include "SOIL.h"

//#include "Camera.h"
//#include "Map.h"

//#include ""
using namespace std;

int main()
{
    Quaternion test = new Quaternion(1.0,1.0,1.0,1.0);

    Quaternion test2 = new Quaternion(2.0,2.0,2.0,2.0);

    Quaternion test3 = test.somme(test2);

}






