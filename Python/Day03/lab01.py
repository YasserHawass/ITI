'''
/*******************************************************************************
/*  AUTHORS:         Your Name                                                  *
/*  DATE:            December 27, 2021                                          *
/*  VER:             1.0                                                        *
/*  DESCRIPTION:     This code manges a database for employees.                 *
/*                   Each employee has unique Id, and following data:           *
/*                   Name, Job, Salary                                          *
/*******************************************************************************
'''


employees = dict()


while 1:
	print("|***********************************************|")
	print("| To Add New Empolyee Press 1                   |")
	print("| To Print Employee Data press 2                |")
	print("| To Delete Employee Press 3                    |")
	print("|***********************************************|")
	
	choice = input("Please enter your choice: ")
	if int(choice) == 1:
		ID = input("Please enter employee ID: ")
		while int(ID) in employees:
			ID = input("ID already exist, please try another one: ")
		name   = input("Please Enter Employee Name: ")
		job    = input("Please Enter Employee Job : ")
		salary = input("Please Enter Employee Salary : ")
		
		employees[int(ID)] = dict(Name=name,Job=job,Salary=salary)
	
	elif int(choice) == 2:
		ID = input("Please enter employee ID: ")
		if int(ID) in employees:
			print("Employee Name  : " + str(employees[int(ID)]['Name']))
			print("Employee Job   : " + str(employees[int(ID)]['Job']))
			print("Employee Salary: " + str(employees[int(ID)]['Salary']))
		else:
			print("Employee Not Found")
	elif int(choice) == 3:
		ID = input("Please enter employee ID: ")
		if int(ID) in employees:
			employees.pop(int(ID))
			print("Employee Deleted")
		else:
			print("Employee Not Found")
		
	else:
		print("Wrong Choice, Please try again")