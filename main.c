#include <stdio.h>
#include "2D/Line2D.h"

int main(){
    Vector2 point1 = {0,0};
    Vector2 point2 = {0,0};
    Vector2 dir1 = {1.0,2.0};
    Vector2 dir2 = {-1.0, -2.0};
    Line2D l1 = {point1, dir1};
    Line2D l2 = {point2, dir2};
    line2DPositionOfTwoLines(&l1, &l2);
    return 0;
}