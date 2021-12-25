#include <stdio.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
    int z,x=5,y= -10,a=4,b=2;
    z = x++ - --y * b / a;
    // z = x++ - --y * b / a
    // z = 5 - -11 * b / a;     ++, -- (right 2 left)
    // z = 5 - -22 / a          *, /, +, -    (left 2 right)
    // z = 5 - -5(+0.2)
    // z = 10;
    //z = --x - --y * b / a; // --x ++x will affect result, also ++y, but y won't nor just x, b / a evaluates to 0
    printf("%d", z);
    //printf("%f", ((float)b/(float)a));
    //printf("%d", ((float)b/(float)a));
    //printf("%d", (float)6/(float)10); // watchout if more than 0.5 instead of going to 0 it goes to max number of int
    return 0;
}
