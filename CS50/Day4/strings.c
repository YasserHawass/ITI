#include <stdio.h>

void main(void){
    char string[50];
    char string2[50];
    scanf("%[^\n]%*c", &string);
    printf("%s", string);
    fflush(stdin);
    scanf("%[^\n]%*c", &string2);
    printf("%s", string2);

}
