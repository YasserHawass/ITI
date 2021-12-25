#include <stdio.h>

void set_array(int *ptr);
void get_array(int *ptr);

// Lab 2. Using a function to read an array from user, and another one to print it.
void main(void) {
    int arr[10];
    set_array(arr);
    get_array(arr);
}

void set_array(int *ptr){
    printf("Please input integers\n");
    for ( int i = 0; i < 10; i++)
        scanf("%d", ptr+i );
}

void get_array(int *ptr){
    for ( int i = 0; i < 10; i++) {
        printf("Value of arr[%d] = %d\n", i, ptr[i]);
    }
}
