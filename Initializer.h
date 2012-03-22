#ifndef Initializer_H
#define Initializer_H

#include <iostream>
#include <GL/glfw.h>
#include "Scene.h"

class Initializer
{
      public:
             Scene* scene;
             
             Initializer()
             {
                //Creating Scene Object
                scene = new Scene();
             }            
             
             void init();
             void draw();
      private:
      protected:
};

#endif
