#include <stdio.h>
#include "Vector2.h"
#include "Layer.h"

int main(){
    Vector2 v1 = {2.0,3.0};
    printf("%f", vector2GetLength(&v1));
    return 0;
}