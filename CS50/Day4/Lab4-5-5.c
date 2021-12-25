#include <stdio.h>
#include <stdlib.h>

void main(void){
    int n,m, i;

    printf("how many string?\n");
    scanf("%d", &n);
    char **arr = malloc(n * sizeof(*arr));

    for(i = 0; i < n; i++){
        printf("how long is the string?\n");
        fflush(stdin);
        scanf("%d", &m);
        arr[i] = malloc(m * sizeof(char));
        }

    for (i = 0; i < n; i++){
        printf("write a string\n");
        fflush(stdin);
        scanf("%[^\n]%*c", arr[i]);
        fflush(stdin);
    }

    for (i = 0; i < n; i++){
        printf("%s\n", arr[i]);

    }

    for(int i = 0; i < n; i++){
        free(arr[i]);
    }
    free(arr);
}
