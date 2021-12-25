#include <stdio.h>
#include <conio.h>

// Lab 8 If you have a matrix of dimension 3*4. Write a program to read it from the user and find the sum of each row &
// the average of each column.
void main(void){
    printf("Please input some the rows integers\n");
    int array_integers[3][4];
    for(int x = 0; x < 3 ; x++){
        for (int y = 0; y < 4; y++){
            scanf("%d", &array_integers[x][y]);
        }
        printf("Please input some the rows integers\n");
    }
    float avg = 0;
    int sum = 0;
    for(int x = 0; x < 3 ; x++){
        for (int y = 0; y < 4; y++){
            sum = sum + array_integers[x][y];
        }
        printf("Row number %d sum is %d\n",x+1, sum );
        sum=0;
    }
    for(int y = 0; y < 4 ; y++){
        for (int x = 0; x < 3; x++){
            avg = avg + (float)array_integers[x][y];
        }
        printf("Column %d avg is %f\n",y+1, avg/4 );
        avg=0;
    }
    /*
    for(int x = 0; x< 3; x++){
        for (int y = 0 ; y<4;y++){
            printf("%d\t", array_integers[x][y]);
        }
        printf("\n");
    }
    */
}
