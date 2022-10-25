#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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

Vector2* vector2ScalarProduct(Vector2* v1, Vector2* v2){
    Vector2* mult = (Vector2*) malloc(sizeof(Vector2*));
    mult->x = v1->x * v2->x;
    mult->y = v1->y * v2->y;
    return mult;
}

Vector2* vector2DivideWithNumber(Vector2* v, float num){
    Vector2* div = (Vector2*) malloc(sizeof(Vector2*));
    div->x = v->x/num;
    div->y = v->y/num;
    return div;
}

float getVector2Length(Vector2* v){
    return sqrt(pow(v->x,2)+pow(v->y,2));
}

Vector2* getMiddleOfTwoVector2(Vector2* p1, Vector2* p2){
    return vector2DivideWithNumber(vector2Addition(p1,p2), 2);
}

void printVector2(Vector2* v){
    printf("Vector2: x=%f, y=%f", v->x, v->y);
}