#include <stdio.h>
#include<stdio.h>
#include<stdlib.h>
struct Ex{
    int i; float j; char *s;
};
int main(){
    struct Ex *p;
    p= (struct Ex *) malloc (sizeof(struct Ex));
    // I had to add sizeof()
    p->s = (char *) malloc(sizeof(char[20]));

    strcpy(p->s, "ABS");
    printf("%s",p->s);
    return 0;
}
