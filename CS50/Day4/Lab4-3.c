#include <stdio.h>
void strcpy_2(char *src, char *dest);
// Lab 3. Write a function to make a string copy from source string to destination string. (like strcpy())
void main(void) {
    char ste[50] = "Hello PARTY PEOPLE";
    char ste2[50];
    strcpy_2(ste, ste2);
    puts(ste2);
}

void strcpy_2(char *src, char *dest){
    int i=0;
    while(src[i]!='\0'){
        *(dest+i) = *(src+i);
        i++;
    }
    // so when printing the destination string as a whole
    *(dest+i)='\0';

}

