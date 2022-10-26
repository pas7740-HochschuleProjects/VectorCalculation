#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include "Vector2.h"

Vector2* vector2Addition(Vector2* v1, Vector2* v2){
    Vector2* sum = (Vector2*) malloc(sizeof(Vector2*));
    sum->x = v1->x + v2->x;
    sum->y = v1->y + v2->y;
    return sum;
}

Vector2* vector2Subtraction(Vector2* v1, Vector2* v2){
    Vector2* diff = (Vector2*) malloc(sizeof(Vector2*));
    diff->x = v1->x + v2->x;
    diff->y = v1->y + v2->y;
    return diff;
}

float vector2ScalarProduct(Vector2* v1, Vector2* v2){
    float scalar = 0;
    scalar += v1->x * v2->x;
    scalar += v1->y * v2->y;
    return scalar;
}

Vector2* vector2DivideWithNumber(Vector2* v, float num){
    Vector2* div = (Vector2*) malloc(sizeof(Vector2*));
    div->x = v->x/num;
    div->y = v->y/num;
    return div;
}

Vector2* vector2Division(Vector2* v1, Vector2* v2){
    Vector2* div = (Vector2*) malloc(sizeof(Vector2*));
    div->x = v1->x/v2->x;
    div->y = v1->y/v2->y;
    return div;
}

float vector2GetLength(Vector2* v){
    return sqrt(pow(v->x,2)+pow(v->y,2));
}

Vector2* vector2GetMiddlePoint(Vector2* p1, Vector2* p2){
    return vector2DivideWithNumber(vector2Addition(p1,p2), 2);
}

Vector2* vector2GetWeightPointOfTriangle(Vector2* p1, Vector2* p2, Vector2* p3){
    return vector2DivideWithNumber(vector2Addition(vector2Addition(p1, p2), p3), 3);
}

bool vector2Orthogonal(Vector2* v1, Vector2* v2){
    if(vector2ScalarProduct(v1, v2) == 0) return true;
    return false;
}

void printVector2(Vector2* v){
    printf("Vector2: x=%f, y=%f\n", v->x, v->y);
}