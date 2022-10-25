#include "Vector2.h"

int main(){
    Vector2 firstVector = {3.0,4.0};
    Vector2 secondVector = {5.0,7.0};
    printVector2(getMiddleOfTwoVector2(&firstVector, &secondVector));
    return 0;
}