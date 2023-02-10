/*
This module is in charge of outputting game graphics.
All the phong gameplay graphics will be based on rectangles, that contain parameters such position , whight, width and color.
So , drawing a game frame will be performed by taking a list of triangles and drawing it with their updated 
parameters.  
*/
#ifndef GRAPHICS_H
#define GRAPHICS_H
#include "math/rectangle.h"

/*
    Initializes graphics subsystem. 
*/
unsigned char graphics_Init();

/*
    Clears the screen and renders a scene by taking a linked list of retangles to be drawn.
*/
void graphics_RenderScene(Rectangle *rectangles);

#endif