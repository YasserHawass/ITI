#include <stdio.h>
struct Employee {
    int id;
    char name[51];
    int salary;
};
// Lab 4. Write a program to make an array of Employees with size determined at run time from a
// user and read its data and print the ID and net salary for each employee.
void set_employee(struct Employee *temp);
void print_employee(struct Employee *temp);

void main(void) {
    int n;
    struct Employee *HR_Employee;
    printf("How many Employee?\n");
    scanf("%d", &n);
    HR_Employee = (struct Employee *) calloc(n, sizeof(struct Employee));
    for (int i = 0; i < n; i++){
        set_employee(&HR_Employee[i]);
    }
    for (int i = 0; i < n; i++){
        print_employee(&HR_Employee[i]);
    }
    free(HR_Employee);
}

void set_employee(struct Employee *temp){
    struct Employee random_em;
    printf("Enter ID: ");
    scanf("%d",&random_em.id);
    fflush(stdin);
    printf("Enter salary: ");
    scanf("%d", &random_em.salary);
    fflush(stdin); // to flush the keyboard buffer
    *temp = random_em;
}

void print_employee(struct Employee *temp){
    printf("you asked for employee with id %d and salary %d\n", temp->id, temp->salary);
}

