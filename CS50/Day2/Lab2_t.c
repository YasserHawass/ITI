#include <stdio.h>
#include <conio.h>
#include <windows.h>

// Lab 4 Write a C program to print the multiplication table in ascending order from table 1 to table 10 sequentially and
// separated by group of “ *’s ”.

void main(void){
    /*
    for (int i = 0;i <10;i+=2){
        printf("%d\n", i);
    }
    // IT BUGS into infinite loop
    for (int i = 0;i <10;i+2){
        printf("%d\n", i);
    }
    */
    /*
    // 1       2       0       0       0       0       0       0       0       0
    int arr[10] = {1,2};
    for (int i = 0; i<10; i++){
        printf("%d\t", arr[i]);
    }
    */

    // any letter prints 0
    int i = 0;
    scanf("%d",&i);
    switch(i){
        case1:
            printf("first is here");
            break;
        default:
            printf("%d", i);
    }
}
