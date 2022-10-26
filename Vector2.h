#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include <stdbool.h>

typedef struct{
    float x;
    float y;
} Vector2;

Vector2* vector2Addition(Vector2* v1, Vector2* v2);

Vector2* vector2Subtraction(Vector2* v1, Vector2* v2);

float vector2ScalarProduct(Vector2* v1, Vector2* v2);

Vector2* vector2DivideWithNumber(Vector2* v, float num);

Vector2* vector2Division(Vector2* v1, Vector2* v2);

float vector2GetLength(Vector2* v);

Vector2* vector2GetMiddlePoint(Vector2* p1, Vector2* p2);

Vector2* vector2GetWeightPointOfTriangle(Vector2* p1, Vector2* p2, Vector2* p3);

bool vector2Orthogonal(Vector2* v1, Vector2* v2);

void printVector2(Vector2* v);

#endif
