#include <stdio.h>
#include <conio.h>
#include <windows.h>

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
    do {
        gotoxy(row*4, column*3);
        printf("%d",i);
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
