#include<stdio.h>
// Lab 2. Write a program to receive one employee’s data display the code, name, and net salary.
struct Employee {
    int id;
    char name[51];
    int salary;
};

void main(void){
    // Init
    struct Employee random_em;
    //
    printf("Enter ID: ");
    scanf("%d",&random_em.id);
    fflush(stdin); // to flush the keyboard buffer
    printf("Enter name: ");
    scanf ("%[^\n]%*c", &random_em.name);
    fflush(stdin); // to flush the keyboard buffer
    printf("Enter salary: ");
    scanf("%d", &random_em.salary);
    //
    printf("You asked for Employee with ID %d, Name: %s and salary %d.\n", random_em.id, random_em.name, random_em.salary);
}
