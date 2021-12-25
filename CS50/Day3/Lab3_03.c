#include<stdio.h>
//Lab 3. Write two functions to read an Employee’s data and other to print its Name with the net salary.
struct Employee {
    int id;
    char name[51];
    int salary;
};
// Prototypes
void printEmployee(struct Employee random_em);
struct Employee setEmployee();

// main
void main(void){
    struct Employee emp2 = setEmployee();
    printEmployee(emp2);
}

// functions headers & bodies
void printEmployee(struct Employee random_em){
    printf("You asked for Employee with ID %d, Name: %s and salary %d.\n", random_em.id, random_em.name, random_em.salary);
}
struct Employee setEmployee()
{
    struct Employee random_em;

    // read string input from the user until \n is entered
    printf("Enter ID: ");
    scanf("%d",&random_em.id);
    fflush(stdin); // to flush the keyboard buffer
    printf("Enter name: ");
    scanf ("%[^\n]%*c", &random_em.name);
    fflush(stdin); // to flush the keyboard buffer
    printf("Enter salary: ");
    scanf("%d", &random_em.salary);

    return random_em;
}
