#include <stdio.h>
#include <conio.h>
#include <windows.h>
int i = 1, row = 0, column = 0, matrix_index = 0;

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void main(void){
    printf("please only use odd number \n");
    scanf("%d", &matrix_index);
    column = matrix_index / 2;
    system("cls");
    while(i <= (matrix_index * matrix_index)){
        //printf("%d goes to row \t%d, column \t%d\n", i,row,column);
        gotoxy(row*3,column*2);
        printf("%d",i);
        //getch();
        if(i % matrix_index != 0){
            row--;
            column--;
            if (row < 0)
                row = matrix_index - 1;
            if (column < 0)
                column = matrix_index - 1;
        } else {
            row++;
            if (row >= 4){
                row = 0;
            }

        }
        i++;
        getch();
    }
    gotoxy(0,matrix_index*matrix_index);
}
