#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include "Vector3.h"

Vector3* vector3Addition(Vector3* v1, Vector3* v2){
    Vector3* sum = (Vector3*) malloc(sizeof(Vector3*));
    sum->x = v1->x + v2->x;
    sum->y = v1->y + v2->y;
    sum->z = v1->z + v2->z;
    return sum;
}

Vector3* vector3Subtraction(Vector3* v1, Vector3* v2){
    Vector3* diff = (Vector3*) malloc(sizeof(Vector3*));
    diff->x = v1->x - v2->x;
    diff->y = v1->y - v2->y;
    diff->z = v1->z - v2->z;
    return diff;
}

float vector3ScalarProduct(Vector3* v1, Vector3* v2){
    float scalar = 0;
    scalar += v1->x * v2->x;
    scalar += v1->y * v2->y;
    scalar += v1->z * v2->z;
    return scalar;
}

Vector3* vector3DivideWithNumber(Vector3* v, float num){
    Vector3* div = (Vector3*) malloc(sizeof(Vector3*));
    div->x = v->x/num;
    div->y = v->y/num;
    div->z = v->z/num;
    return div;
}

Vector3* vector3Division(Vector3* v1, Vector3* v2){
    Vector3* div = (Vector3*) malloc(sizeof(Vector3*));
    div->x = v1->x/v2->x;
    div->y = v1->y/v2->y;
    div->z = v1->z/v2->z;
    return div;
}

float vector3GetLength(Vector3* v){
    return sqrt(pow(v->x,2)+pow(v->y,2)+pow(v->z,2));
}

Vector3* vector3GetMiddlePoint(Vector3* p1, Vector3* p2){
    return vector3DivideWithNumber(vector3Addition(p1,p2), 2);
}

Vector3* vector3GetWeightPointOfTriangle(Vector3* p1, Vector3* p2, Vector3* p3){
    return vector3DivideWithNumber(vector3Addition(vector3Addition(p1, p2), p3), 3);
}

bool vector3Orthogonal(Vector3* v1, Vector3* v2){
    if(vector3ScalarProduct(v1, v2) == 0) return true;
    return false;
}

void printVector3(Vector3* v){
    printf("Vector3: x=%f, y=%f, z=%f\n", v->x, v->y, v->z);
}