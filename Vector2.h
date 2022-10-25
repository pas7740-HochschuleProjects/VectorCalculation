#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

typedef struct{
    float x;
    float y;
} Vector2;

Vector2* vector2Addition(Vector2* v1, Vector2* v2);

Vector2* vector2Subtraction(Vector2* v1, Vector2* v2);

Vector2* vector2ScalarProduct(Vector2* v1, Vector2* v2);

Vector2* vector2DivideWithNumber(Vector2* v, float num);

float getVector2Length(Vector2* v);

Vector2* getMiddleOfTwoVector2(Vector2* p1, Vector2* p2);

void printVector2(Vector2* v);

#endif
