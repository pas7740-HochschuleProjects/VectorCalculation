#include <stdio.h>
#include "3D/Line3D.h"

int main(){
    Vector3 p1 = {0.1,2.0,3.0};
    Vector3 p2 = {1.0,2.2,3.1};
    Vector3 d1 = {1.0,2.0,3.0};
    Vector3 d2 = {-1.0,-2.0,-3.0};
    Line3D l1 = {p1, d2};
    Line3D l2 = {p2, d2};
    line3DPositionOfTwoLines(&l1, &l2);
    return 0;
}