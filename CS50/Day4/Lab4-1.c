#include <stdio.h>
void swap2(int *a, int *b);
void swap3(int *a, int *b);
void swap4(int *a, int *b);
void swap5(int *a, int *b);

// Lab 1. Write a swap function using call by address.
void main(void){
    int number_1 = 5, number_2 =7;
    //scanf("%d %d", number_1, number_2);
    printf("1st number is %d and second is %d\n", number_1, number_2);
    swap2(&number_1, &number_2);
    printf("1st number is %d and second is %d\n", number_1, number_2);
    swap3(&number_1, &number_2);
    printf("1st number is %d and second is %d\n", number_1, number_2);
    swap4(&number_1, &number_2);
    printf("1st number is %d and second is %d\n", number_1, number_2);
    swap5(&number_1, &number_2);
    printf("1st number is %d and second is %d\n", number_1, number_2);
}
/*
    gets location of both a & b, then start getting their value changed.
*/
void swap2(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void swap3(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void swap4(int *a, int *b){
    if (*b == 0){
        *b = *a;
        *a = 0;
    }
    *a = *a * *b;
    *b = *a / *b;
    *a = *a / *b;
}

void swap5(int *a, int *b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
