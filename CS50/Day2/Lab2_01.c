#include <stdio.h>
#include <conio.h>
#include <windows.h>
void printc(int row, int column, int i, int matrix_index){
    gotoxy(row*5, column*3);
    printf("|%2d|",i);
    // CAVE MAN OGA BOGA
    if (column == 1){
        gotoxy(row*5, column*3-1);
        printf("-" );
        gotoxy(row*5+1, column*3-1);
        printf("-" );
        gotoxy(row*5-1, column*3-1);
        printf("-----" );
    }
    gotoxy(row*5, column*3+1);
    printf("-" );
    gotoxy(row*5+1, column*3+1);
    printf("-" );
    gotoxy(row*5-1, column*3+1);
    printf("-----" );
    if (column >= matrix_index ){
        gotoxy(row*5, column*3+1);
        printf("-" );
        gotoxy(row*5+1, column*3+1);
        printf("-" );
        gotoxy(row*5, column*3+1);
        printf("-----" );
    }
    // COLUMNS ON RIGHT AND LEFT
    /*
    if (row == 1){
        gotoxy(row*5-1, column*3);
        printf("=" );
        gotoxy(row*5-1, column*3+1);
        printf("=" );
        gotoxy(row*5-1, column*3-1);
        printf("=" );
    }

    if (row >= matrix_index){
        gotoxy(row*5-1, column*3);
        printf("=" );
        gotoxy(row*5-1, column*3+1);
        printf("=" );
        gotoxy(row*5-1, column*3-1);
        printf("=" );
    }
    */


}
/*
void table(int matrix_index){
    for (int i = 0; i< (matrix_index)*(matrix_index); i++){
        gotoxy(i+5,2);
        printf("=");
    }
    for (int i = 0; i< (1+matrix_index)*(matrix_index); i++){
        gotoxy(i+5,2);
        printf("=");
    }
}
*/
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void main(void){
    int i = 1, row = 1, column = 1, matrix_index = 0;
    printf("please only use odd number \n");
    scanf("%d", &matrix_index);
    // ODD VALDIATION loop
    while (matrix_index %2 == 0){
        printf("You have to input pdd integers only please\n");
        fflush(stdin); // to flush the keyboard buffer
        scanf("%d", &matrix_index);
    }
    row = (matrix_index/2) + 1;
    system("cls");
    //table(matrix_index);
    //getch();
    do {
        //gotoxy(row*4, column*3);
        //printf("%d",i);
        printc(row, column, i, matrix_index);
        if (i%matrix_index == 0){
            column++;
            if (column > matrix_index){
                column = 1;
            }
        } else{
            row--;
            column--;
            if (row < 1){
                row = matrix_index;
            }
            if (column < 1){
                column = matrix_index;
            }
        }
        i++;
    }while(i < matrix_index*matrix_index+1);
    // for cleaner exiting
    getch();
}
