'''
/*******************************************************************************
/*  AUTHORS:         Yasser Hawass                                              *
/*  DATE:            December 28, 2021                                          *
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
	print("| To Exit Press 4                               |")
	print("|***********************************************|")
	
	choice = int(input("Please Enter Your Choice: "))

	if choice == 1:
		ID = int(input("Please enter employee ID: "))
		while ID in employees:
			ID = input("ID already exist, please try another one: ")
		name   = input("Please Enter Employee Name: ")
		job    = input("Please Enter Employee Job : ")
		salary = input("Please Enter Employee Salary : ")
		
		employees[ID] = dict(Name=name,Job=job,Salary=salary) # or {Name:name,Job:job,Salary:salary}
	
	elif choice == 2:
		ID = int(input("Please enter employee ID: "))
		if ID in employees:
			print("Employee Name  : " + str(employees[ID]['Name']))
			print("Employee Job   : " + str(employees[ID]['Job']))
			print("Employee Salary: " + str(employees[ID]['Salary']))
		else:
			print("Employee Not Found")
	elif choice == 3:
		ID = int(input("Please enter employee ID: "))
		if ID in employees:
			employees.pop(ID)
			print("Employee Deleted")
		else:
			print("Employee Not Found")
		
	elif choice == 4:  
		print("Thank You For Using Our Program")
		break
	else:
		print("Wrong Choice, Please try again")