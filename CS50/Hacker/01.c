#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch;
    char s[51], sen[51];
    scanf("%c", &ch);
    fflush(stdin);
    scanf("%[^\n]%*c", &s);
    fflush(stdin);
    scanf("%[^\n]%*c", &sen);
    fflush(stdin);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    return 0;
}
