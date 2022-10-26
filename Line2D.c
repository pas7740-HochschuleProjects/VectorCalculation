#include <stdbool.h>
#include "Line2D.h"

void positionOfTwoLines(Line2D* l1, Line2D* l2){
    if(line2DIsMultiple(l1, l2)){
        
    }
    printf("There is no corellation");
}

bool line2DIsMultiple(Line2D* l1, Line2D* l2){
    Vector2 div = *vector2Division(&l1->direction, &l2->direction);
    if(div.x == div.y) return true;
    return false;
}