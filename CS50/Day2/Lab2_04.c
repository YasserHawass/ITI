#include <stdio.h>
#include <conio.h>
#include <windows.h>

// Lab 4 Write a C program to print the multiplication table in ascending order from table 1 to table 10 sequentially and
// separated by group of “ *’s ”.
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void main(void){
    int x = 0;
    int y = 0;
    for (int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++) {
            printf("%d * %d = %d", i, j, i*j);
            y+=1;
            gotoxy(x,y);
        }

        x += 30;
        if (x <= 60 & y > 10){
            y = 0;
        }
        if (x > 60){
            x = 0;
        }
        //printf("\n");
    }
}
