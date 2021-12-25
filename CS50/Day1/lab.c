#include <stdio.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[10],n,i;
    system ("cls");
    printf("Enter the number to convert: ");
    scanf("%d",&n);
    for(i=0;n>0;i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    printf("\nBinary of Given Number is=");
    for(i=i-1;i>=0;i--){
        printf("%d",a[i]);
    }
    return 0;
}
/*
// Testing Compiler out!
void main(void){
    printf("Hello World!");
    getchar();
}
*/

// Lab 1 to test the different format specifiers with “printf “
/*
void main(void){
    // Special Request from Eng. Sherbiney
    // Print String & also integers with only 4 digits
    char name[]= "Yasser Was Here";
    printf("name printed as %%s is %s\n",name);
    // Print only 4 digits

    int input_integer = 0;
    printf("please Enter Some Integers: \n");

    scanf("%d", &input_integer);
    printf("You entered integer %04d, which can be written in Octal as %o, and %x in Hexa...\n", input_integer, input_integer,input_integer);
    getchar();
}
*/
/*
// Lab 2 Read Char and print it in ASCI
void main(void){
    char input_character;
    printf("Please Enter ONE character: \n");
    input_character = getchar();
    printf("You entered character %c, and it's %d in ASCI", input_character, input_character);
    getchar();
}
*/
/*
// Lab 3 display integer as Octal & Hexadecimal
void main(void){
    int input_integer = 0;
    printf("please Enter Some Integers: \n");
    scanf("%d", &input_integer);
    printf("You entered integer %d, which can be written in Octal as %o, and %x in Hexa...\n", input_integer, input_integer,input_integer);
    getchar();
}
*/

/*
void main(void){
    // BONUSES 2
    int an_integer = 15;
    printf("integer %04d, can be written in Octal as %o, and %x in Hexa...\n", an_integer, an_integer,an_integer);
    float a_float = 5.05;
    printf("You inserted %0.5f", a_float);

    // Turn to Binary

    getchar();
}
*/
