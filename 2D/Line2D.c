#include <stdbool.h>
#include <stdio.h>
#include "Line2D.h"

void line2DPositionOfTwoLines(Line2D* l1, Line2D* l2){
    if(line2DIsMultiple(l1, l2)){
        //Same
        if(line2DIsPointOnLine(l1, &l2->point)){
            printf("Lines are the same");
            return;
        }
        //Parallel
        printf("Lines are parallel");
        return;
    }
    printf("There is no correlation");
}

bool line2DIsPointOnLine(Line2D* l, Vector2* p){
    Vector2 result;
    result.x = (p->x-l->point.x)/l->direction.x;
    result.y = (p->y-l->point.y)/l->direction.y;
    if(result.x == result.y) return true;
    return false;
}

bool line2DIsMultiple(Line2D* l1, Line2D* l2){
    Vector2 div = *vector2Division(&l1->direction, &l2->direction);
    if(div.x == div.y) return true;
    return false;
}