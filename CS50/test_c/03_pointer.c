#include <stdio.h>
#include<stdio.h>
#include<stdlib.h>

int* Reverse (int *x){
    int *ptr; // runtime Error because ptr is not initalized
    // https://stackoverflow.com/questions/5870038/uninitialized-pointers-in-code
    //printf("%d\n", *x); //uncomment for some laughter.
    *ptr = (-1 * (*x));
    return ptr;
}
int main(){
    int A = 8;
    A = *Reverse(&A);
    printf("%d",A);
    return 0;
}
