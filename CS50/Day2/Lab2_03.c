#include <stdio.h>
#include <conio.h>
#include <windows.h>

// Lab 3 Write a C program to print a simple menu with 3 choices, when select one choice print the choice word and exit.
void main(void){
    int required_state = 1;

    COORD c;
    c.X = 40;
    c.Y = 4;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("1 - I'm The first word");
    c.Y = 8;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("2 - I'm The second word");
    c.Y = 12;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("3 - I'm The third word");
    c.Y = 16;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("4 - exit program");
    c.X = 0;
    c.Y = 24;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    printf("You can input your choice here: ");
    while (required_state){
        while (scanf("%d", &required_state) != 1){
                    /* Display error message. */
                    printf("You have to input integers only please\n");
                    fflush(stdin); // to flush the keyboard buffer
        }

        switch(required_state){
        case 1:
            printf("I'm The first word                        \n");
            break;
        case 2:
            printf("I'm The second word                        \n");
            break;
        case 3:
            printf("I'm the third word                          \n");
            break;
        case 4:
            printf("I'm leaving!                                  ");
            required_state = 0;
            break;
        default:
            printf("please only enter integers between 1 to 4.");
        }
        c.X = 32;
        c.Y = 24;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    }
    printf("END\n");
}
