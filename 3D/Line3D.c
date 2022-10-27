#include <stdbool.h>
#include <stdio.h>
#include "Line3D.h"
#include "Vector3.h"

void line3DPositionOfTwoLines(Line3D* l1, Line3D* l2){
    if(line3DIsMultiple(l1, l2)){
        //Same
        if(line3DIsPointOnLine(l1, &l2->point)){
            printf("Lines are the same");
            return;
        }
        //Parallel
        printf("Lines are parallel");
        return;
    }
    printf("There is no correlation");
}

bool line3DIsPointOnLine(Line3D* l, Vector3* p){
    Vector3 result;
    result.x = (p->x-l->point.x)/l->direction.x;
    result.y = (p->y-l->point.y)/l->direction.y;
    result.z = (p->z-l->point.z)/l->direction.z;
    if(result.x == result.y == result.z) return true;
    return false;
}

bool line3DIsMultiple(Line3D* l1, Line3D* l2){
    Vector3 div = *vector3Division(&l1->direction, &l2->direction);
    if(div.x == div.y == div.z) return true;
    return false;
}