#include <iostream>

#include <GL/gl.h>
#include <GL/glu.h>

<<<<<<< HEAD
//#include "glut.h"
//#include "SOIL.h"

=======
#include "Quaternion.h"

//#include "glut.h"
//#include "SOIL.h"

>>>>>>> master
//#include "Camera.h"
//#include "Map.h"

//#include ""
using namespace std;

int main()
{
<<<<<<< HEAD
    Quaternion test = new Quaternion(1.0,1.0,1.0,1.0);

    Quaternion test2 = new Quaternion(2.0,2.0,2.0,2.0);
=======
    Quaternion test(1.0,1.0,1.0,1.0);

    test.displayQuaternion();

    Quaternion test2(2.0,2.0,2.0,2.0);
>>>>>>> master

    test2.displayQuaternion();

    Quaternion test3 = test.somme(test2);

    test3.displayQuaternion();
}






