#include "Camera.h"
//tjena
//Initialize Camera
void Camera::init()
{
    // Frame Counter & Window Settings
	int frame      = 0, width     = 800, height      = 600;
	int redBits    = 8, greenBits = 8,   blueBits    = 8;
	int alphaBits  = 8, depthBits = 0,   stencilBits = 0;
	
	// Create a window
	if(!glfwOpenWindow(width, height, redBits, greenBits, blueBits, alphaBits, depthBits, stencilBits, GLFW_WINDOW))
	{
		glfwTerminate();
 	}  
     
    //Setup projection matrix.
    glMatrixMode(GL_PROJECTION); // Makes projection matrix editable
    glLoadIdentity(); // Reset the matrix to identity
    // 65 degrees FOV, same aspect ratio as window, depth range 1 to 100
    gluPerspective( 65.0f, (GLfloat)width/(GLfloat)height, 1.0f, 100.0f );

    //Setup modelview matrix.
    glMatrixMode( GL_MODELVIEW ); // "We want to edit the modelview matrix"
    glLoadIdentity(); // Reset the matrix to identity
    // Look from 0,-5,0 towards 0,0,0 with Z as "up" in the image
    gluLookAt( 0.0f, -5.0f, 0.0f,    // Eye position
               0.0f, 0.0f, 0.0f,   // View point
               0.0f, 0.0f, 1.0f );  // Up vector
}



//Draw Camera
void Camera::draw()
{

}
