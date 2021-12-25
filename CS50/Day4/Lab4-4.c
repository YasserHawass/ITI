#include <stdio.h>
#include <stdlib.h>

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
    int n =5, i;
    struct Employee Emp1 = {15, "Bob Alice", 50000};
    struct Employee *HR_Employee;
    HR_Employee = (struct Employee *) calloc(n, sizeof(struct Employee));
    HR_Employee[0] = {15, "Bob Alice", 50000};
    for(i=0; HR_Employee!=NULL&&i<n; i++)
        //scanf(“%d”, &ptr[i]);
        print_employee(HR_Employee[i]);
    // print_employee(&Emp1);
    free(HR_Employee);
}


void print_employee(struct Employee *temp){
    printf("you asked for %d with salary %d", temp->id, temp->salary);
}

