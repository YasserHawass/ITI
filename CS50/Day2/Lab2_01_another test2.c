
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include <windows.h>
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void main()
{
    for(int i=0;i<=5;i++)
{
  gotoxy(0,i);            /* changing row by keeping column (x) constant */
  cprintf("%c",179);   /* printing graphical character 179 */
}
}
