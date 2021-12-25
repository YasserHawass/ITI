#include <stdio.h>
#include <conio.h>
#include <windows.h>
int x=0,y=0,z=0;
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void main(void){
    for (int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++) {
            printf("%d * %d = %d", i, j, i*j);
            y++;
            gotoxy(x,y);
        }
        x+=20;
        if(i<5){
            y=0;
        }
        if(i>=5&i<10){
            y=12;
        }
        if(x>80){
            x=0;
        }
        gotoxy(x,y);

    }
}
