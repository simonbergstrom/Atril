#include "Scene.h"

//Initialize Scene
void Scene::init()
{
     camera->init();
     light->init();
     collision->init();
}

//Draw Scene
void Scene::draw()
{
     camera->draw();
     light->draw();
     collision->draw();
}
