#include <stdio.h>
// Lab 5. Write a program to make an array of strings which number of strings is read from the
// user and so the size of each string is read from the user, after that read all strings and
// print it.

void main(void) {
    int i, j, N, M, **pptr;
    scanf("%d %d",&N, &M);
    fflush(stdin);

    char **strings = calloc(N, M * sizeof(char *));
    //strings[0]="Hello";
    //strings[1]="Hi";

    for (i = 0; i <N; i++){
        printf("Enter some string \n");
        scanf("%[^\n]%*c",strings[i]);
        fflush(stdin);
    }
    for (i = 0; i < N; i++){
        printf("%s\n", &strings[i]);
    }
    /*
    for (i = 0; i < 20; ++i) {
        strings[i] = (char *)malloc(20+1);
    }
    */
    /*
    scanf("%d",&N);
    scanf("%d",&M);
    pptr = (int **) malloc (N * sizeof(int *));
    for(i=0; i<N; i++)
        pptr[i] = (int *) malloc(M * sizeof(int));
    for(i=0; i<N; i++)
        for(j=0; j<M; j++)
            scanf("%d", &pptr[i][j]);
    for(i=0; i<N; i++)
        for(j=0; j<M; j++)
            printf("Value of pptr[%d][%d] = %d\n",i,j, pptr[i][j]);
    */
}

