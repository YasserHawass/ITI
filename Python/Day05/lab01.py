'''
/*******************************************************************************
/*  AUTHORS:         Yasser Hawass                                              *
/*  DATE:            December 30, 2021                                          *
/*  VER:             1.0                                                        *
/*  DESCRIPTION:     This code simulates and ATM                                *
/*                   it uses open window, destroy other methodolgy              *
/*                   first code blocks are window functions, and followed by    *
/*                   button functions                                           *
/*******************************************************************************
'''

import tkinter as tk
import tkinter.messagebox as msgbox

# IDs is more like a list
IDs  = ('215321701332',
		'203659302214',
		'126355700193',
		'201455998011',
		'201122369851',
		'201356788002',
		'203366789564',
		'201236787812')
# Data is more like dictionary
Data = {IDs[0]:{'Name':'Ahmed Abdelrazek Mohamed','Password':'1783','Balance':'3500166'},
		IDs[1]:{'Name':'Salma Mohamed Foaad','Password':'1390','Balance':'520001'},
		IDs[2]:{'Name':'Adel Khaled Abdelrahman','Password':'1214','Balance':'111000'},
		IDs[3]:{'Name':'Saeed Amin Elsawy','Password':'2001','Balance':'1200'},
		IDs[4]:{'Name':'Amir Salama Elgendy','Password':'8935','Balance':'178933'},
		IDs[5]:{'Name':'Wael Mohamed khairy','Password':'3420','Balance':'55000'},
		IDs[6]:{'Name':'Mina Sameh Bishoy','Password':'1179','Balance':'18000'},
		IDs[7]:{'Name':'Omnia Ahmed Awad','Password':'1430','Balance':'180350'},}

def mainWindow():
    global id_window
    global id_entry
    id_window = tk.Tk()
    id_window.title("ATM")
    id_window.geometry("400x400")
    id_window.configure(bg="#bdd6ee")
    id_window.resizable(0,0)

    # ititialize the widgets
    id_label = tk.Label(id_window, text="User ID: ").place(x=10, y=10)
    id_entry = tk.Entry(id_window)
    id_entry.place(x=100, y=10)
    id_button = tk.Button(id_window, text="Login", command=id_check).place(x=300, y=10)
    exit_button = tk.Button(id_window, text="Exit", command=id_window.destroy).place(x=300, y=40)


# id_button function
def id_check():
    id = id_entry.get()
    if id in IDs:
        global pass_window
        global pass_entry   # is it better being written here?
        id_window.withdraw()
        pass_window = tk.Toplevel()
        pass_window.title("ATM")
        pass_window.geometry("400x400")
        pass_window.configure(bg="#bdd6ee")
        pass_window.resizable(0,0)
        pass_label = tk.Label(pass_window, text="Password: ").place(x=10, y=10)
        pass_entry = tk.Entry(pass_window)
        pass_entry.place(x=100, y=10)
        pass_button = tk.Button(pass_window, text="Login", command=pass_check).place(x=300, y=10)
        exit_button = tk.Button(pass_window, text="Exit", command=pass_window.destroy).place(x=300, y=40)
    else:
        msgbox.showerror("Error", "ID not found")

def pass_check():
    global try_no
    id = id_entry.get()
    password = pass_entry.get()
    if password == Data[id]['Password']:
        global menu_window
        try_no = 0
        pass_window.withdraw()
        menu_window = tk.Toplevel()
        menu_window.title("ATM")
        menu_window.geometry("400x400")
        menu_window.configure(bg="#bdd6ee")
        menu_window.resizable(0,0)
        menu_label = tk.Label(menu_window, text="Welcome " + Data[id]['Name']).place(x=10, y=10)
        balance_button = tk.Button(menu_window, text="Balance", command=balance).place(x=10, y=40)
        withdraw_button = tk.Button(menu_window, text="Withdraw", command=withdraw).place(x=10, y=70)
        changepw_button = tk.Button(menu_window, text="Change Password", command=changepw).place(x=10, y=100)
        fawry_button = tk.Button(menu_window, text="Fawry", command=fawry).place(x=10, y=130)
        logout_button = tk.Button(menu_window, text="Logout", command=logout).place(x=10, y=160)
        exit_button = tk.Button(menu_window, text="Exit", command=id_window.destroy).place(x=10, y=190)

    else:
        try_no += 1
        if try_no == 3:
            msgbox.showerror("Error", "You have tried 3 times, you are blocked")
            pass_window.destroy()
            id_window.destroy()
            mainWindow()
        else:
            msgbox.showerror("Error", "Wrong Password")
            pass_entry.delete(0, tk.END)
            pass_entry.focus()

def balance():
    id = id_entry.get()
    msgbox.showinfo("Balance", "Your balance is " + Data[id]['Balance'] +"LE.")

def changepw():
    menu_window.withdraw()
    global changepw_window
    global changepw_entry
    global confrim_changepw_entry
    changepw_window = tk.Toplevel()
    changepw_window.title("ATM")
    changepw_window.geometry("400x400")
    changepw_window.configure(bg="#bdd6ee")
    changepw_window.resizable(0,0)
    changepw_label = tk.Label(changepw_window, text="Enter your new password: ").place(x=10, y=10)
    changepw_entry = tk.Entry(changepw_window)
    changepw_entry.place(x=180, y= 10)
    confrim_changepw_label = tk.Label(changepw_window, text="Confirm your new password: ").place(x=10, y=40)
    confrim_changepw_entry = tk.Entry(changepw_window)
    confrim_changepw_entry.place(x=180, y=40)
    changepw_button = tk.Button(changepw_window, text="Change", command=changepw_check).place(x=300, y=10)

def changepw_check():
    id = id_entry.get()
    new_password = changepw_entry.get()
    confrim_password = confrim_changepw_entry.get()
    if new_password == confrim_password:
        Data[id]['Password'] = new_password
        msgbox.showinfo("Success", "Your password has been changed successfully")
        changepw_window.destroy()
        menu_window.deiconify()
    else:
        msgbox.showerror("Error", "Your passwords don't match")

def logout():
    menu_window.withdraw()
    id_window.deiconify()

# after withdraw, ssytem print a thank you message
# allowed values are multiple of 100 otherwise it will print an error message
# if the balance is less than the withdraw amount, it will print an error message
# max allowed withdraw is 5000
def withdraw():
    menu_window.withdraw()
    global withdraw_window
    global withdraw_entry
    withdraw_window = tk.Toplevel()
    withdraw_window.title("ATM")
    withdraw_window.geometry("400x400")
    withdraw_window.configure(bg="#bdd6ee")
    withdraw_window.resizable(0,0)
    withdraw_label = tk.Label(withdraw_window, text="Enter the amount you want to withdraw: ").place(x=10, y=10)
    withdraw_entry = tk.Entry(withdraw_window)
    withdraw_entry.place(x=10, y=40)
    withdraw_button = tk.Button(withdraw_window, text="Withdraw", command=withdraw_check).place(x=300, y=10)

def withdraw_check():
    id = id_entry.get()
    withdraw_amount = withdraw_entry.get()
    if withdraw_amount.isdigit():
        withdraw_amount = int(withdraw_amount)
        if withdraw_amount % 100 == 0:
            if withdraw_amount <= 5000:
                if withdraw_amount <= int(Data[id]['Balance']):
                    Data[id]['Balance'] = str( int(Data[id]['Balance']) - withdraw_amount)
                    msgbox.showinfo("Success", "Your balance is " + Data[id]['Balance'] + "LE.")
                    withdraw_window.destroy()
                    menu_window.deiconify()
                else:
                    msgbox.showerror("Error", "You don't have enough money")
                    withdraw_window.destroy()
                    menu_window.deiconify()
            else:
                msgbox.showerror("Error", "You can't withdraw more than 5000LE")
                withdraw_window.destroy()
                menu_window.deiconify()
        else:
            msgbox.showerror("Error", "You can only withdraw multiples of 100")
            withdraw_window.destroy()
            menu_window.deiconify()
    else:
        msgbox.showerror("Error", "You can only withdraw numbers")
        withdraw_window.destroy()
        menu_window.deiconify()

# the system provides 4 fawry options
# 1- orange recharge, 2- etisalat recharge, 3- vodafone recharge, 4- we recharge
# after the user choose one of the fawry options
# the system will ask for the phone number and the amount of recharge
# if the amount is less than or equal to the balance, it will print a thank you message and update the blance
# if the amount is more than the balance, it will print an error message
def fawry():
    global fawry_window
    global fawry_var
    fawry_var = tk.IntVar()
    menu_window.withdraw()
    fawry_window = tk.Toplevel()
    fawry_window.title("ATM")
    fawry_window.geometry("400x400")
    fawry_window.configure(bg="#bdd6ee")
    fawry_window.resizable(0,0)
    fawry_label = tk.Label(fawry_window, text="Choose your fawry: ").place(x=10, y=10)
    fawry_button1 = tk.Radiobutton(fawry_window, text="Orange", variable=fawry_var, value=1).place(x=10, y=40)
    fawry_button2 = tk.Radiobutton(fawry_window, text="Etisalat", variable=fawry_var, value=2).place(x=10, y=70)
    fawry_button3 = tk.Radiobutton(fawry_window, text="Vodafone", variable=fawry_var, value=3).place(x=10, y=100)
    fawry_button4 = tk.Radiobutton(fawry_window, text="We", variable=fawry_var, value=4).place(x=10, y=130)
    fawry_button = tk.Button(fawry_window, text="Recharge", command=charge_check).place(x=300, y=10)

def charge_check():
    global charge_window
    global phoneno_entry
    global amount_entry
    global fawry_var
    var = fawry_var.get()
    fawry_window.withdraw()
    charge_window = tk.Toplevel()
    charge_window.title("ATM")
    charge_window.geometry("400x400")
    charge_window.configure(bg="#bdd6ee")
    charge_window.resizable(0,0)
    if var == 1:
        label1 = tk.Label(charge_window, text="Enter your phone number: 012").place(x=10, y=10)
    if var == 2:
        label2 = tk.Label(charge_window, text="Enter your phone number: 011").place(x=10, y=10)  
    if var == 3:
        label3 = tk.Label(charge_window, text="Enter your phone number: 010").place(x=10, y=10)
    if var == 4:
        label4 = tk.label(charge_window, text="Enter your phone number: 015").place(x=10, y=10)
    phoneno_entry = tk.Entry(charge_window)
    phoneno_entry.place(x=10, y=40)
    amount_label = tk.Label(charge_window, text="Enter the amount you want to recharge: ").place(x=10, y=70)
    amount_entry = tk.Entry(charge_window)
    amount_entry.place(x=10, y=100)
    charge_button = tk.Button(charge_window, text="Charge", command=charge_check2).place(x=300, y=10)

def charge_check2():
    global charge_window
    global phoneno_entry
    global amount_entry
    global fawry_var
    id = id_entry.get()
    phoneno = phoneno_entry.get()
    amount = amount_entry.get()
    if amount.isdigit() and len(phoneno) == 8:
        amount = int(amount)
        if amount <= int(Data[id]['Balance']):
            Data[id]['Balance'] = str(int(Data[id]['Balance']) - amount)
            msgbox.showinfo("Success", "Your balance is " + Data[id]['Balance'] + "LE.")
            charge_window.destroy()
            menu_window.deiconify()
        else:
            msgbox.showerror("Error", "You don't have enough money")
            charge_window.destroy()
            menu_window.deiconify()
    else:
        msgbox.showerror("Error", "You can only charge numbers")
        charge_window.destroy()
        menu_window.deiconify()
mainWindow()
tk.mainloop()