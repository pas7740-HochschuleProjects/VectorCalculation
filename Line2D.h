#include <stdbool.h>
#include "Vector2.h"

typedef struct{
    Vector2 point;
    Vector2 direction;
    float factor;
} Line2D;

bool line2DIsMultiple(Line2D* l1, Line2D* l2);

void positionOfTwoLines(Line2D* l1, Line2D* l2);