#ifndef LINE2D_H_INCLUDED
#define LINE2D_H_INCLUDED

#include <stdbool.h>
#include "Vector2.h"

typedef struct{
    Vector2 point;
    Vector2 direction;
    float factor;
} Line2D;

bool line2DIsMultiple(Line2D* l1, Line2D* l2);

void line2DPositionOfTwoLines(Line2D* l1, Line2D* l2);

bool line2DIsPointOnLine(Line2D* l, Vector2* p);

#endif