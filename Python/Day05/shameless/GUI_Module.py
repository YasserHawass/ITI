'''
/*******************************************************************************
/*  AUTHORS:         Yasser Hawass                                              *
/*  DATE:            December 30, 2021                                          *
/*  VER:             1.0                                                        *
/*  DESCRIPTION:     This code manges a database for employees.                 *
/*                   Each employee has unique Id, and following data:           *
/*                   Name, Job, Salary                                          *
/*******************************************************************************
'''

''' Import tkinter module '''
from tkinter import *
import tkinter.messagebox as msgbox

''' IDs List '''
IDs  = ('215321701332',
		'203659302214',
		'126355700193',
		'201455998011',
		'201122369851',
		'201356788002',
		'203366789564',
		'201236787812')

''' Data Dictionary '''
Data = {IDs[0]:{'Name':'Ahmed Abdelrazek Mohamed','Password':'1783','Balance':'3500166'},
		IDs[1]:{'Name':'Salma Mohamed Foaad','Password':'1390','Balance':'520001'},
		IDs[2]:{'Name':'Adel Khaled Abdelrahman','Password':'1214','Balance':'111000'},
		IDs[3]:{'Name':'Saeed Amin Elsawy','Password':'2001','Balance':'1200'},
		IDs[4]:{'Name':'Amir Salama Elgendy','Password':'8935','Balance':'178933'},
		IDs[5]:{'Name':'Wael Mohamed khairy','Password':'3420','Balance':'55000'},
		IDs[6]:{'Name':'Mina Sameh Bishoy','Password':'1179','Balance':'18000'},
		IDs[7]:{'Name':'Omnia Ahmed Awad','Password':'1430','Balance':'180350'},}

''' Global Variables '''
Counter = 0
Service_Var = 0

''' Create Main Window '''
def Create_MainWindow():
	global MainWindow
	MainWindow = Tk()
	MainWindow.geometry("460x350+200+200")
	MainWindow.configure(background="gold")
	MainWindow.resizable(width=False, height=False)
	i = 0
	while i<6:
		MainWindow.columnconfigure(i,minsize='10m')
		i += 1
	i = 0
	while i<9:	
		MainWindow.rowconfigure(i,minsize='10m')
		i += 1
	ID_Label = Label(MainWindow,text='ID:',font=30,bg='gold').grid(row=3,column=2)
	global ID_Entry
	ID_Entry = Entry(MainWindow,font=30,bg='gold')
	ID_Entry.grid(row=3,column=3)
	ID_Button = Button(MainWindow,text="Log in",fg='white',bg='blue',font=30,command=Create_PasswordWindow)
	ID_Button.grid(row=4,column=3)
	Exit_MainWindow_Button = Button(MainWindow,text=" Exit ",fg='white',bg='red',font=30,command=MainWindow.destroy)
	Exit_MainWindow_Button.grid(row=7,column=3)

''' Create Password Window '''
def Create_PasswordWindow():
	ID = ID_Entry.get()
	if ID in IDs:
		MainWindow.withdraw()
		global PasswordWindow
		PasswordWindow = Toplevel()
		PasswordWindow.geometry("460x350+200+200")
		PasswordWindow.title("ATM | Fierro-Bank")
		PasswordWindow.configure(background="gold")
		PasswordWindow.resizable(width=False, height=False)
		i = 0
		while i<5:
			PasswordWindow.columnconfigure(i,minsize='10m')
			i += 1
		i = 0
		while i<9:	
			PasswordWindow.rowconfigure(i,minsize='10m')
			i += 1
		Name_Label = Label(PasswordWindow,text='Welcome '+Data[ID]['Name'],font=30,bg='gold').grid(row=0,column=1,columnspan=2)
		Pass_Label = Label(PasswordWindow,text='Password:',font=30,bg='gold').grid(row=3,column=1)
		global Pass_Entry
		Pass_Entry = Entry(PasswordWindow,font=30,bg='gold',show='*')
		Pass_Entry.grid(row=3,column=2)
		Pass_Button = Button(PasswordWindow,text="Log in",fg='white',bg='blue',font=30,command=Create_MenuWindow)
		Pass_Button.grid(row=4,column=2)
		Exit_PasswordWindow_Button = Button(PasswordWindow,text=" Exit ",fg='white',bg='red',font=30,command=MainWindow.destroy)
		Exit_PasswordWindow_Button.grid(row=7,column=2)
	else:
		msgbox.showerror('Wrong ID','You enter a wrong ID!\nTry again!')

''' Create Menu Window '''
def Create_MenuWindow():
	ID   = ID_Entry.get()
	Pass = Pass_Entry.get()
	global Counter
	if Pass == Data[ID]['Password']:
		Counter = 0
		PasswordWindow.withdraw()
		global MenuWindow
		MenuWindow = Toplevel()
		MenuWindow.geometry("460x350+200+200")
		MenuWindow.title("ATM | Fierro-Bank - Home")
		MenuWindow.configure(background="gold")
		MenuWindow.resizable(width=False, height=False)
		CashWithdraw_Button = Button(MenuWindow,text='Cash Withdraw',bg='maroon',fg='black',font=30,command=CashWithdraw_Button_Function)
		CashWithdraw_Button.pack(expand=True,fill=BOTH)
		BalanceInquiry_Button = Button(MenuWindow,text='Balance Inquiry',bg='darkorange',fg='black',font=30,command=BalanceInquiry_Button_Function)
		BalanceInquiry_Button.pack(expand=True,fill=BOTH)
		PasswordChange_Button = Button(MenuWindow,text='Password Change',bg='olive',fg='black',font=30,command=PasswordChange_Button_Function)
		PasswordChange_Button.pack(expand=True,fill=BOTH)
		FawryService_Button = Button(MenuWindow,text='Fawry Service',bg='skyblue',fg='black',font=30,command=FawryService_Button_Function)
		FawryService_Button.pack(expand=True,fill=BOTH)
		LogOut_Button = Button(MenuWindow,text='Log Out',bg='navy',fg='black',font=30,command=LogOut_Button_Function)
		LogOut_Button.pack(expand=True,fill=BOTH)
		Exit_Button = Button(MenuWindow,text='Exit',bg='red',fg='black',font=30,command=MainWindow.destroy)
		Exit_Button.pack(expand=True,fill=BOTH)
	else:
		Counter += 1
		Try      = 3 - Counter
		msgbox.showerror('Wrong Password','You enter a wrong Password!\nTry again! - You have '+str(Try)+' Tries')
	if Counter == 3:
		MainWindow.deiconify()
		PasswordWindow.destroy()
	else:
		''' Do Nothing '''

''' Create CashWithdraw Window '''		
def CashWithdraw_Button_Function():
	MenuWindow.withdraw()
	global CashWithdrawWindow
	CashWithdrawWindow = Toplevel()
	CashWithdrawWindow.geometry("460x350+200+200")
	CashWithdrawWindow.configure(background="gold")
	CashWithdrawWindow.resizable(width=False, height=False)
	CashWithdraw_Label = Label(CashWithdrawWindow,text='Cash Withdraw',bg='gold').pack()
	_50_Button = Button(CashWithdrawWindow,text='50 LE',bg='maroon',fg='black',font=30,command=_50LE_Fn)
	_50_Button.pack(expand=True,fill=BOTH)
	_100_Button = Button(CashWithdrawWindow,text='100 LE',bg='maroon',fg='black',font=30,command=_100LE_Fn)
	_100_Button.pack(expand=True,fill=BOTH)
	_200_Button = Button(CashWithdrawWindow,text='200 LE',bg='maroon',fg='black',font=30,command=_200LE_Fn)
	_200_Button.pack(expand=True,fill=BOTH)
	_500_Button = Button(CashWithdrawWindow,text='500 LE',bg='maroon',fg='black',font=30,command=_500LE_Fn)
	_500_Button.pack(expand=True,fill=BOTH)
	_1000_Button = Button(CashWithdrawWindow,text='1000 LE',bg='maroon',fg='black',font=30,command=_1000LE_Fn)
	_1000_Button.pack(expand=True,fill=BOTH)
	_2000_Button = Button(CashWithdrawWindow,text='2000 LE',bg='maroon',fg='black',font=30,command=_2000LE_Fn)
	_2000_Button.pack(expand=True,fill=BOTH)
	_5000_Button = Button(CashWithdrawWindow,text='5000 LE',bg='maroon',fg='black',font=30,command=_5000LE_Fn)
	_5000_Button.pack(expand=True,fill=BOTH)
	Close_CashWithdrawWindow_Button = Button(CashWithdrawWindow,text='Close',bg='red',fg='black',font=30,command=Close_CashWithdrawWindow_Fn)
	Close_CashWithdrawWindow_Button.pack(expand=True,fill=BOTH)
	
''' CashWithdraw Buttons Functions '''
def _50LE_Fn():
	ID = ID_Entry.get()
	if (int(Data[ID]['Balance']) >= 50):
		Balance = int(Data[ID]['Balance']) - 50
		Data[ID]['Balance'] = str(Balance)
		msgbox.showinfo("Done!", "50 LE was withdrawn")
	else:
		msgbox.showerror('Error!',"Your Balance is less than the amount you want to withdraw")
	Close_CashWithdrawWindow_Fn()
def _100LE_Fn():
	ID = ID_Entry.get()
	if (int(Data[ID]['Balance']) >= 100):
		Balance = int(Data[ID]['Balance']) - 100
		Data[ID]['Balance'] = str(Balance)
		msgbox.showinfo("Done!", "100 LE was withdrawn")
	else:
		msgbox.showerror('Error!',"Your Balance is less than the amount you want to withdraw")
	Close_CashWithdrawWindow_Fn()
def _200LE_Fn():
	ID = ID_Entry.get()
	if (int(Data[ID]['Balance']) >= 200):
		Balance = int(Data[ID]['Balance']) - 200
		Data[ID]['Balance'] = str(Balance)
		msgbox.showinfo("Done!", "200 LE was withdrawn")
	else:
		msgbox.showerror('Error!',"Your Balance is less than the amount you want to withdraw")
	Close_CashWithdrawWindow_Fn()
def _500LE_Fn():
	ID = ID_Entry.get()
	if (int(Data[ID]['Balance']) >= 500):
		Balance = int(Data[ID]['Balance']) - 500
		Data[ID]['Balance'] = str(Balance)
		msgbox.showinfo("Done!", "500 LE was withdrawn")
	else:
		msgbox.showerror('Error!',"Your Balance is less than the amount you want to withdraw")
	Close_CashWithdrawWindow_Fn()
def _1000LE_Fn():
	ID = ID_Entry.get()
	if (int(Data[ID]['Balance']) >= 1000):
		Balance = int(Data[ID]['Balance']) - 1000
		Data[ID]['Balance'] = str(Balance)
		msgbox.showinfo("Done!", "1000 LE was withdrawn")
	else:
		msgbox.showerror('Error!',"Your Balance is less than the amount you want to withdraw")
	Close_CashWithdrawWindow_Fn()
def _2000LE_Fn():
	ID = ID_Entry.get()
	if (int(Data[ID]['Balance']) >= 2000):
		Balance = int(Data[ID]['Balance']) - 2000
		Data[ID]['Balance'] = str(Balance)
		msgbox.showinfo("Done!", "2000 LE was withdrawn")
	else:
		msgbox.showerror('Error!',"Your Balance is less than the amount you want to withdraw")
	Close_CashWithdrawWindow_Fn()
def _5000LE_Fn():
	ID = ID_Entry.get()
	if (int(Data[ID]['Balance']) >= 5000):
		Balance = int(Data[ID]['Balance']) - 5000
		Data[ID]['Balance'] = str(Balance)
		msgbox.showinfo("Done!", "5000 LE was withdrawn")
	else:
		msgbox.showerror('Error!',"Your Balance is less than the amount you want to withdraw")
	Close_CashWithdrawWindow_Fn()

''' Close CashWithdraw Window '''
def Close_CashWithdrawWindow_Fn():
	CashWithdrawWindow.destroy()
	MenuWindow.deiconify()
	
''' Create BalanceInquiry Window '''
def BalanceInquiry_Button_Function():
	ID = ID_Entry.get()
	MenuWindow.withdraw()
	global BalanceInquiryWindow
	BalanceInquiryWindow = Toplevel()
	BalanceInquiryWindow.geometry("460x350+200+200")
	BalanceInquiryWindow.title("ATM | Fierro-Bank - Balance Inquiry")
	BalanceInquiryWindow.configure(background="gold")
	BalanceInquiryWindow.resizable(width=False, height=False)
	i = 0
	while i<6:
		BalanceInquiryWindow.columnconfigure(i,minsize='10m')
		i += 1
	i = 0
	while i<9:	
		BalanceInquiryWindow.rowconfigure(i,minsize='10m')
		i += 1
	BalanceInquiry_Label = Label(BalanceInquiryWindow,text='Balance Inquiry',font=30,bg='gold').grid(row=0,column=2)
	Name_Label = Label(BalanceInquiryWindow,text='Name: '+Data[ID]['Name'],font=10,bg='gold').grid(row=2,column=2)
	Balance_Label = Label(BalanceInquiryWindow,text='Balance: '+Data[ID]['Balance']+' LE',font=10,bg='gold').grid(row=3,column=2)
	Close_BalanceInquiryWindow_Button = Button(BalanceInquiryWindow,text=" Close ",fg='white',bg='red',font=30,command=Close_BalanceInquiryWindow_Fn)
	Close_BalanceInquiryWindow_Button.grid(row=7,column=2)
	
''' Close BalanceInquiry Window '''
def Close_BalanceInquiryWindow_Fn():
	BalanceInquiryWindow.destroy()
	MenuWindow.deiconify()
	
''' Create PasswordChange Window '''
def PasswordChange_Button_Function():
	MenuWindow.withdraw()
	global PasswordChangeWindow
	PasswordChangeWindow = Toplevel()
	PasswordChangeWindow.geometry("460x350+200+200")
	PasswordChangeWindow.title("ATM | Fierro-Bank - Password Change")
	PasswordChangeWindow.configure(background="gold")
	PasswordChangeWindow.resizable(width=False, height=False)
	i = 0
	while i<6:
		PasswordChangeWindow.columnconfigure(i,minsize='10m')
		i += 1
	i = 0
	while i<9:	
		PasswordChangeWindow.rowconfigure(i,minsize='10m')
		i += 1
	PasswordChange_Label = Label(PasswordChangeWindow,text='Password Change',font=30,bg='gold').grid(row=0,column=2,columnspan=2)
	NewPassword_Label = Label(PasswordChangeWindow,text='New Password:',font=10,bg='gold').grid(row=2,column=1)
	global NewPassword_Entry
	NewPassword_Entry = Entry(PasswordChangeWindow,font=10,bg='gold',show='*')
	NewPassword_Entry.grid(row=2,column=2,columnspan=2)
	ConfirmPassword_Label = Label(PasswordChangeWindow,text='Confirm Password:',font=10,bg='gold').grid(row=3,column=1)
	global ConfirmPassword_Entry
	ConfirmPassword_Entry = Entry(PasswordChangeWindow,font=10,bg='gold',show='*')
	ConfirmPassword_Entry.grid(row=3,column=2,columnspan=2)
	Confirm_Button = Button(PasswordChangeWindow,text='Confirm',fg='white',bg='blue',font=30,command=Confirm_Password)
	Confirm_Button.grid(row=4,column=2)
	Cancel_Button = Button(PasswordChangeWindow,text='Cancel',fg='white',bg='red',font=30,command=Close_PasswordChangeWindow_Fn)
	Cancel_Button.grid(row=4,column=3)
	
''' Confirm_Button Function '''
def Confirm_Password():
	ID = ID_Entry.get()
	if len(NewPassword_Entry.get()) < 5:
		if (NewPassword_Entry.get())==(ConfirmPassword_Entry.get()):
			Data[ID]['Password'] = NewPassword_Entry.get()
			msgbox.showinfo("Password Changed", "Done!")
			Close_PasswordChangeWindow_Fn()
		else:
			msgbox.showerror('Error!',"The two passwords aren't match\nTry again")
	else:
		msgbox.showerror('Error!',"You passwords lenght 4 charchaters only\nTry again")

''' Close PasswordChange Window '''	
def Close_PasswordChangeWindow_Fn():
	PasswordChangeWindow.destroy()
	MenuWindow.deiconify()
	
''' Create FawryService Window '''
def FawryService_Button_Function():
	MenuWindow.withdraw()
	global FawryServiceWindow
	FawryServiceWindow = Toplevel()
	FawryServiceWindow.geometry("460x350+200+200")
	FawryServiceWindow.title("ATM | Fierro-Bank - Fawry Service")
	FawryServiceWindow.configure(background="gold")
	FawryServiceWindow.resizable(width=False, height=False)
	i = 0
	while i<6:
		FawryServiceWindow.columnconfigure(i,minsize='10m')
		i += 1
	i = 0
	while i<9:	
		FawryServiceWindow.rowconfigure(i,minsize='10m')
		i += 1
	FawryService_Label = Label(FawryServiceWindow,text='Fawry Service',font=30,bg='gold').grid(row=0,column=1,columnspan=2)
	Service_Label = Label(FawryServiceWindow,text='Service: ',font=10,bg='gold').grid(row=2,column=1)
	global Service_Var 
	Service_Var   = IntVar()
	Orange_Recharge = Radiobutton(FawryServiceWindow,text='Orange Recharge',variable=Service_Var,value=0,bg='gold')
	Orange_Recharge.grid(row=2,column=2)
	Etisalat_Recharge = Radiobutton(FawryServiceWindow,text='Etisalat Recharge',variable=Service_Var,value=1,bg='gold')
	Etisalat_Recharge.grid(row=3,column=2)
	Vodafone_Recharge = Radiobutton(FawryServiceWindow,text='Vodafone Recharge',variable=Service_Var,value=2,bg='gold')
	Vodafone_Recharge.grid(row=4,column=2)
	We_Recharge = Radiobutton(FawryServiceWindow,text='We Recharge',variable=Service_Var,value=3,bg='gold')
	We_Recharge.grid(row=5,column=2)
	Charge_Button = Button(FawryServiceWindow,text="Charge",fg='white',bg='blue',font=30,command=Charge_Fn)
	Charge_Button.grid(row=7,column=2)
	Close_FawryServiceWindow_Button = Button(FawryServiceWindow,text=" Close ",fg='white',bg='red',font=30,command=Close_FawryServiceWindow_Fn)
	Close_FawryServiceWindow_Button.grid(row=8,column=2)
	
''' Charge_Button Function '''
def Charge_Fn():
	FawryServiceWindow.withdraw()
	global ChargeWindow
	ChargeWindow = Toplevel()
	ChargeWindow.geometry("210x120+200+200")
	ChargeWindow.title("ATM | Fierro-Bank - Fawry Service")
	ChargeWindow.configure(background="gold")
	ChargeWindow.resizable(width=False, height=False)
	Var = Service_Var.get()
	if Var == 0:
		Service_Start_Label = Label(ChargeWindow,text='Phone: 012',bg='gold').grid(row=0,column=0)
	elif Var == 1:                                                            
		Service_Start_Label = Label(ChargeWindow,text='Phone: 011',bg='gold').grid(row=0,column=0)
	elif Var == 2:                                                            
		Service_Start_Label = Label(ChargeWindow,text='Phone: 010',bg='gold').grid(row=0,column=0)
	else:                                                                             
		Service_Start_Label = Label(ChargeWindow,text='Phone: 015',bg='gold').grid(row=0,column=0)
	global PhoneNumber_Entry
	PhoneNumber_Entry = Entry(ChargeWindow,bg='gold')
	PhoneNumber_Entry.grid(row=0,column=1)
	Amount_Label = Label(ChargeWindow,text='Amount: ',bg='gold').grid(row=1,column=0)
	global Amount_Entry
	Amount_Entry = Entry(ChargeWindow,bg='gold')
	Amount_Entry.grid(row=1,column=1)
	LE_Label = Label(ChargeWindow,text='LE',bg='gold').grid(row=1,column=2)
	OK_Button = Button(ChargeWindow,text="OK",fg='white',bg='blue',font=30,command=OK_Fn)
	OK_Button.grid(row=2,column=1)
	Close_ChargeWindow_Button = Button(ChargeWindow,text=" Close ",fg='white',bg='red',font=30,command=Close_ChargeWindow_Fn)
	Close_ChargeWindow_Button.grid(row=3,column=1)

''' OK_Button Function '''
def OK_Fn():
	ID     = ID_Entry.get()
	Amount = Amount_Entry.get()
	Phone  = PhoneNumber_Entry.get()
	try:
		int(Amount)
		int(Phone)
		if len(Phone) < 9:
			if (int(Data[ID]['Balance']) >= int(Amount)):
				Balance = int(Data[ID]['Balance']) - int(Amount)
				Data[ID]['Balance'] = str(Balance)
				Var = Service_Var.get()
				if Var == 0:
					msgbox.showinfo("Done!", Amount+" LE was withdrawn to charge 012"+Phone)
				elif Var == 1:                                                            
					msgbox.showinfo("Done!", Amount+" LE was withdrawn to charge 011"+Phone)
				elif Var == 2:                                                            
					msgbox.showinfo("Done!", Amount+" LE was withdrawn to charge 010"+Phone)
				else:                                                                             
					msgbox.showinfo("Done!", Amount+" LE was withdrawn to charge 015"+Phone)
			else:
				msgbox.showerror('Error!',"Your Balance is less than the amount you want to charge")
			Close_ChargeWindow_Fn()
		else:
			msgbox.showerror('Error!',"Your wrote a wrong phone number!")
	except ValueError:
		msgbox.showerror('Error!',"Your have to write integer not letters!")

''' Create ChargeWindow Window '''
def Close_ChargeWindow_Fn():
	ChargeWindow.destroy()
	FawryServiceWindow.deiconify()

''' Close FawryService Window '''	
def Close_FawryServiceWindow_Fn():
	FawryServiceWindow.destroy()
	MenuWindow.deiconify()
	
''' LogOut_Button Function '''
def LogOut_Button_Function():
	MenuWindow.destroy()
	MainWindow.deiconify()