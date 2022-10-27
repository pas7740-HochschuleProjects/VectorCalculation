#ifndef VECTOR3_H_INCLUDED
#define VECTOR3_H_INCLUDED

#include <stdbool.h>

typedef struct{
    float x;
    float y;
    float z;
} Vector3;

Vector3* vector3Addition(Vector3* v1, Vector3* v2);

Vector3* vector3Subtraction(Vector3* v1, Vector3* v2);

float vector3ScalarProduct(Vector3* v1, Vector3* v2);

Vector3* vector3DivideWithNumber(Vector3* v, float num);

Vector3* vector3Division(Vector3* v1, Vector3* v2);

float vector3GetLength(Vector3* v);

Vector3* vector3GetMiddlePoint(Vector3* p1, Vector3* p2);

Vector3* vector3GetWeightPointOfTriangle(Vector3* p1, Vector3* p2, Vector3* p3);

bool vector3Orthogonal(Vector3* v1, Vector3* v2);

void printVector3(Vector3* v);

#endif