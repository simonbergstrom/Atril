#ifndef Scene_H
#define Scene_H

#include <iostream>
#include <GL/glfw.h>
#include "Camera.h"
#include "Light.h"
#include "Collision.h"

class Scene
{
      public:
             Camera* camera;
             Light* light;
             Collision* collision;
             
             Scene()
             {
                //Creating Camera, Collision, Light, Render Objects
                camera = new Camera();
                light = new Light();
                collision = new Collision();
             }   
             
             void init();
             void draw();
      private:
      protected:
};

#endif
