#ifndef LINE3D_H_INCLUDED
#define LINE3D_H_INCLUDED

#include <stdbool.h>
#include "Vector3.h"

typedef struct{
    Vector3 point;
    Vector3 direction;
    float factor;
} Line3D;

bool line3DIsMultiple(Line3D* l1, Line3D* l2);

void line3DPositionOfTwoLines(Line3D* l1, Line3D* l2);

bool line3DIsPointOnLine(Line3D* l, Vector3* p);

#endif