/*
    Defines bidimentional vector and methods to perform its basic operations
*/
#ifndef VECTOR2D_H
#define VECTOR2D_H

//Bidimentional vector with floating point components
typedef struct {
    float x, y;
} Vector2D; 
//Returns a new vector given its components
Vector2D vec2d_create(float x, float y);
//Add two vectors
Vector2D vec2d_add(Vector2D a, Vector2D b);
//Subtracts two vectors returning the resulting vector.
Vector2D vec2d_subtract(Vector2D a, Vector2D b);
//Multiplies two vectors by scalar and returns the resulting vector
Vector2D vec2d_multiply(Vector2D a, float scalar);
//Returns the dot product of two vectors
float vec2d_dot(Vector2D a, Vector2D b);
#endif




