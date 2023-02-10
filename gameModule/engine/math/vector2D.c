
#include "vector2D.h"

Vector2D vec2d_create(float x, float y) {
    Vector2D result = {x, y};
    return result;
}

Vector2D vec2d_add(Vector2D a, Vector2D b) {
    Vector2D result = {a.x + b.x, a.y + b.y};
    return result;
}

Vector2D vec2d_subtract(Vector2D a, Vector2D b) {
    Vector2D result = {a.x - b.x, a.y - b.y};
    return result;
}

Vector2D vec2d_multiply(Vector2D a, float scalar) {
    Vector2D result = {a.x * scalar, a.y * scalar};
    return result;
}

float vec2d_dot(Vector2D a, Vector2D b) {
    return a.x * b.x + a.y * b.y;
}

