#include <stdio.h>
#include <conio.h>

// Lab 7 Write a program to find the maximum and minimum values of a set of numbers using a single dimension array.
void main(void){
    int integers_array[10] = {10,25,-45,990,80,5,45,88,99,100};
    int low = integers_array[0]; // way cleaner than going to max possible value.
    int high = integers_array[0]; // way cleaner than going to min possible value.
    for (int i = 0; i < 10; i++){
        if (low > integers_array[i]){
            low = integers_array[i];
        }
        if (high < integers_array[i]){
            high = integers_array[i];
        }
    }
    printf("Highest number is %d, and lowest is %d", high, low);
}
