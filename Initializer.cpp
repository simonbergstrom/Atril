#include "Initializer.h"


//Initialize global variables and objects
void Initializer::init()
{     
    // Enable back face culling and Z buffering
    glEnable(GL_CULL_FACE); // Cull away all back facing polygons
    glEnable(GL_DEPTH_TEST); // Use the Z buffer
      
     scene->init();
}

//Draw all the shit
void Initializer::draw()
{
     // Clear the color buffer and the depth buffer.
     glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
     
     scene->draw();
}
