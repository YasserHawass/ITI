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
import tkinter as tk
main_window = tk.Tk()
from tkinter.messagebox import showinfo

main_window.title("Employee Database")
main_window.configure(bg="#bdd6ee")

try_no = 0
users = {'Ahmed':'1394', 'Ali':'6078', 'Amr':'9345'}
name = str()
password = str()
def check():
	global try_no
	global name
	global password
	try_no += 1
	if try_no <= 3:
		name = user_obj.get()
		password = pass_obj.get()
		if name in users:
			if users[name] == password:
				popup_showinfo(f"Howdy's {name}")
				main_window.destroy()
			else:
				popup_showinfo("Wrong Password")
		else:
			popup_showinfo("Wrong User Name")
	else:
		popup_showinfo("You have tried too many times")
		main_window.destroy()

def popup_showinfo(msg=None):
    showinfo("Window", f"{msg}")


# ititialize the widgets
user_label = tk.Label(main_window, text="User Name: ")
user_obj = tk.Entry(main_window, textvariable=name)
pass_label = tk.Label(main_window, text="Password: ")
pass_obj = tk.Entry(main_window, textvariable=password, show="*")


button = tk.Button(main_window, text="Login", command=check)
# place the widgets
user_label.pack()
user_obj.pack()
pass_label.pack()
pass_obj.pack()
button.pack()


main_window.mainloop()