#include <stdio.h>
#include "Line2D.h"

int main(){
    Vector2 point1 = {0,0};
    Vector2 point2 = {1,1};
    Vector2 dir1 = {1.0,2.0};
    Vector2 dir2 = {-1.0, -2.0};
    Line2D l1 = {point1, dir1, 2};
    Line2D l2 = {point2, dir2, 2};
    if(line2DIsMultiple(&l1, &l2)){
        printf("Multiple\n");
    }
    return 0;
}