#include <stdio.h>
// Lab 5. Write a program to make an array of strings which number of strings is read from the
// user and so the size of each string is read from the user, after that read all strings and
// print it.

void main(void) {
    int n=2, N= 51, i;
    char *strings[N];
    strings[0] = (char*) calloc(2, sizeof(char)*N);
    strings[0] = "Hello People";
    strings[1] = (char*) calloc(2, sizeof(char)*N);
    strings[1] = "People";
    for(i = 0; i < n; i++){
        printf("%s\n",strings[0]);
    }
    /*
    printf("How many String?\n");
    scanf("%d", &n);
    printf("How long is the string?\n");
    scanf("%d", &N);
    */
    /*
    struct Employee *HR_Employee;
    HR_Employee = (struct Employee *) calloc(n, sizeof(struct Employee));
    HR_Employee[0] = {15, "Bob Alice", 50000};
    for(i=0; HR_Employee!=NULL&&i<n; i++)
        //scanf(“%d”, &ptr[i]);
        print_employee(HR_Employee[i]);


    int i, j, N, M, **pptr;
    scanf(“%d”&N); scanf(“%d”&M);
    pptr = (int **) malloc (N * sizeof(int *));
    for(i=0; i<N; i++)
        pptr[i] = (int *) malloc(M * sizeof(int));
    for(i=0; i<N; i++)
        for(j=0; j<M; j++)
            scanf(“%d”, &pptr[i][j]);
    for(i=0; i<N; i++)
        for(j=0; j<M; j++)
            printf("Value of pptr[%d][%d] = %d\n",i,j, pptr[i][j]);
*/
}

