#include <iostream>

#include <GL/gl.h>
#include <GL/glu.h>

#include "Quaternion.h"

//#include "glut.h"
//#include "SOIL.h"

//#include "Camera.h"
//#include "Map.h"

using namespace std;

int main()
{
    Quaternion test(1.0,1.0,1.0,1.0);

    Quaternion test2(2.0,2.0,2.0,2.0);

    Quaternion test3 = test.somme(test2);

}






