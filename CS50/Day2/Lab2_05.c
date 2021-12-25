#include <stdio.h>
#include <conio.h>

// Lab 4 Write a C program to print the multiplication table in ascending order from table 1 to table 10 sequentially and
// separated by group of “ *’s ”.
void main(void){
    for (int i = 10; i >= 1; i--){
        printf("Printing multiplication table for %d\n", i);
        for(int j = 10; j >= 1; j--) {
            printf("%d * %d = %d\n", i, j, i*j);
        }
    }
}
