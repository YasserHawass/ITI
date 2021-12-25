#include <stdio.h>
#include <conio.h>

// Lab 6 Write a program to read an array and print it using 2 for loops?
void main(void){
    int numbers_array[10];
    int input_number;
    // this loop reads users input of integers
    printf("Insert 10 integers please\n");
    for (int i = 0; i< 10; i++){
            if (scanf("%d", &input_number) != 1){
                    /* Display error message. */
                    printf("You have to input integers only please\n");
                    break;
            }
            numbers_array[i] = input_number;
    }
    // this loop prints the array
    printf("You sir inputed the following numbers \n");
    for (int i = 0 ; i < 10 ; i++){
        printf("%d ", numbers_array[i]);
    }
}
