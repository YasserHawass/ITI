#include <stdio.h>
#include <conio.h>

// Lab 2 Write a C program to receive numbers from the user, and exit when the sum exceeds 100.
void main(void){
    int sum = 0, input_integer = 0;
    printf("Please input only integers\n");
    do {
        while (scanf("%d", &input_integer) != 1){
                    /* Display error message. */
                    printf("You have to input integers only please\n");
                    fflush(stdin); // to flush the keyboard buffer
            }
        sum += input_integer;
    } while(sum < 100);
    printf("END!");
}
