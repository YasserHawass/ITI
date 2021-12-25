#include <iostream>
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
    int col=25,temp,row=6,getkey,i=0,l=0,row1,col1,a[]={0,5,23,17,9,24,11,16,2,20,1,14,7,18,22,3,15,10,19,4,12,21,6,13,8};
    void table();
    void check(int []);
    void instructions();
    instructions();
    do{
    clrscr();row1=6;col1=17,gotoxy(25,6);i=0;
    for(i=0;i<=24;i++)
    {
        if(i%5==0&&i!=0)
        {row1=row1+3;col1=17;}
        if(a[i]==0)
        {col1=col1+8;
        gotoxy(col1,row1);cout<<” “;}
        else
        {col1=col1+8;
        gotoxy(col1,row1);cout<<a[i];}
    }
    table();
    check(a);
    gotoxy(35,2);textcolor(LIGHTMAGENTA);cprintf(“MAGIC BOX!!!”);
    gotoxy(12,25);textcolor(GREEN);cprintf(“Are You Tired…..Well this is One game you Have to THINK…!!!”);
    gotoxy(1,1);textcolor(WHITE);cprintf(“<EXIT-ESC>”);
    gotoxy(67,20);cout<<“Developed By:-“;
    gotoxy(68,22);cout<<“Tushar Tiwari”;
    gotoxy(75,24);cout<<“(c)IBM”;
    //change
    gotoxy(col,row);
    label:
    getkey=getch();
    if(row==6&&getkey==72)    goto label;
    else if(row==18&&getkey==80) goto label;
    else if(col==25&&getkey==75) goto label;
    else if(col==57&&getkey==77) goto label;
    else if(getkey==80)     //down
    {l=l+5;temp=a[l-5];
    a[l-5]=a[l];
    a[l]=temp;
    row=row+3;
    }
    else if(getkey==72)      //up
    {l=l-5;temp=a[l+5];
    a[l+5]=a[l];
    a[l]=temp;
    row=row-3;
    }
    else if(getkey==77)    //right
    {l=l+1;temp=a[l-1];
    a[l-1]=a[l];
    a[l]=temp;
    col=col+8;
    }
    else if(getkey==75)    //left
    {l=l-1;temp=a[l+1];
    a[l+1]=a[l];
    a[l]=temp;
    col=col-8;
    }}
    while(getkey!=27);
    }
void table()
    {
    char ver=186,hor=205,ch5=203,ch6=202;int i,j;
    for(i=4;i<20;)
    {    for(j=21;j<62;j++)
    {       gotoxy(j,i);cout<<hor;
    }
    i=i+3;
    }
    for(i=4;i<20;i++)
    {          for(j=21;j<68;)
    {       if(i==4&&j!=21&&j!=61)
    {gotoxy(j,i);cout<<ch5;}
    else if(i==19&&j!=21&&j!=61)
    {gotoxy(j,i);cout<<ch6;}
    else
    {gotoxy(j,i);cout<<ver;}
    j=j+8;
    }
    }
    char ch1=201;gotoxy(21,4);cout<<ch1;
    char ch2=187;gotoxy(61,4);cout<<ch2;
    char ch3=200;gotoxy(21,19);cout<<ch3;
    char ch4=188;gotoxy(61,19);cout<<ch4;
}
    void check(int a[])
    {
    int i=0,flag=0;
    for(i=0;i<24;i++)
    {    if(a[i+1]-a[i]!=1)
    flag=1;
    }
    if(flag==0)
    {    clrscr();textcolor(GREEN);
    gotoxy(32,12);cprintf(“Nice One!!! You Win!!!”);
    getch();
    exit(0);
    }
}
void instructions()
{
    clrscr();
    gotoxy(28,5);textcolor(RED);
    cprintf(“Welcome To The MAGIC BOX!!!”);
    gotoxy(21,7);cprintf(“The Rules are Simple. Arrange the numbers”);
    gotoxy(15,8);cprintf(“in ascending order….Best of Luck…You’ll Need It!!!”);
    gotoxy(35,10);textcolor(WHITE);cprintf(“Press Any Key”);
    getch();
}
