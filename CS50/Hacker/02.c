#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float sum(int number_1, int number_2);
float diff(int number_1, int number_2);


int main()
{
	int number1, number2;
    scanf("%d %d", number1, number2);
    printf("%d %d", sum(number1, number2), diff(number1,number2));;

    return 0;
}

float sum(int number_1, int number_2){
    return (float)(number_1+number_2);
}
float diff(int number_1, int number_2){
    if (number_2 > number_1)
        return (float)(number_2-number_1);
    return (float)(number_1-number_2);

}
