#include<stdio.h>
/*
void main(void){

    int i, *ptr, arr[5] = {1,2,3,4,5,6};
    ptr =arr;
    for(i = 0; i< 6; i++){
        printf("%x\n",ptr+i);

    }

}
*/


void main (void)
{
    int x=5, y=7;
    /* call swab function */
    swap2(&x, &y);
    printf("\n Values after swapping: x=%d, y=%d",x,y);

}
void swap2 (int *A, int *B){
    int temp;
    temp = *A;
    *A = *B;
    *B = temp;
}

// won't work becaue we are taking a copy from the address
/*
void main (void)
{
    int x=5, y=7;
    // call swab function
    swap2(&x, &y);
    printf("\n Values after swapping: x=%d, y=%d",x,y);

}
void swap2 (int *A, int *B){
    int *temp;
    temp = A;
    A = B;
    B = temp;
}
*/
