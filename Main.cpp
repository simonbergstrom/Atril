#include <iostream>
#include <GL/glfw.h>
#include "Initializer.h"

using namespace std;

//Variables for FPS
double t0 = 0.0;
char titlestring[200];
int frames = 0;

//Creating Initializer
Initializer* initializer = new Initializer();

//Show FPS
void showFPS() {

    double t, fps;
    
    // Current Time
    t = glfwGetTime();
    
    // If one second has passed, or if this is the very first frame
    if( (t-t0) > 1.0 || frames == 0 )
    {
        fps = (double)frames / (t-t0);
        sprintf(titlestring, "Atril (%.1f FPS)", fps);
        glfwSetWindowTitle(titlestring);
        t0 = t;
        frames = 0;
    }
    frames ++;
}
 
//Main method
int main()
{
 
	// Running Main Loop
	bool running = true;
 
	// Initialize GLFW
	glfwInit();
 	
 	//Initialize initializer
 	initializer->init();
 
	while (running == true)
	{       	
     	//Show FPS
     	showFPS();
     	
     	//Draw initializer
 	    initializer->draw();
 
		// Swap Buffer
		glfwSwapBuffers();
 
		// exit if ESC was pressed or window was closed
		running = !glfwGetKey(GLFW_KEY_ESC) && glfwGetWindowParam(GLFW_OPENED);
	}
 
	glfwTerminate();
 
	return 0;
}
