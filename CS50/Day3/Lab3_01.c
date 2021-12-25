#include<stdio.h>
// Lab 1. Write a recursive function to compute the power operation: X^Y
int power(int x, int y);

// Main
void main(void){
    int base,index;
    printf("Please write the base:\n");
    scanf("%d", &base);
    printf("nice! please write the power:\n");
    scanf("%d",&index);
    printf("%d power to the %d is %d", base, index, power(base,index));
}

// function body & header
int power(int x, int y){
    if (y == 0)
        return 1;
    if (y == 1 )
        return x;
    return x * power(x, y-1);
}
