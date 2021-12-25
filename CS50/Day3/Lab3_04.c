#include<stdio.h>
// Lab 4. Write a program to receive data into an array of 5 employees, then display the code, name, and net salary for each.
struct Employee {
    int id;
    char name[51];
    int salary;
};
// Prototype
void printEmployee(struct Employee random_em);
struct Employee setEmployee();

// main
void main(void){
    struct Employee hr_Emps[5];
    for(int i = 0; i < 5; i++ ){
        printf("Please write Employee no %d info.\n", i+1);
        hr_Emps[i] = setEmployee();
    }
    for(int i = 0; i < 5; i++ ){
        printEmployee(hr_Emps[i]);
    }
}

// functions headers & bodies
void printEmployee(struct Employee random_em){
    printf("You asked for Employee with ID %d, Name: %s and salary %d.\n", random_em.id, random_em.name, random_em.salary);
}
struct Employee setEmployee()
{
  struct Employee random_em;
    printf("Enter ID: ");
    scanf("%d",&random_em.id);
    fflush(stdin);
    // read string input from the user until \n is entered
    printf("Enter name: ");
    scanf ("%[^\n]%*c", &random_em.name);
    fflush(stdin); // to flush the keyboard buffer

    printf("Enter salary: ");
    scanf("%d", &random_em.salary);
    fflush(stdin); // to flush the keyboard buffer

    return random_em;
}
