/*
    This header defines the retangle structure, to be used as representation of graphics objects.
    The struct stores all relevant data for a rectangle, and acts as a linked list element 
*/
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "vector2D.h"

typedef struct Rectangle Rectangle;

struct Rectangle {
    float width; //Rectangle width
    float height; //Rectangle height
    Vector2D position; //The world position of the rectangle
    Rectangle *next; //Pointer for the next element
};

#endif