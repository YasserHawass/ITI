'''
/*******************************************************************************
/*  AUTHORS:         Yasser Hawass                                              *
/*  DATE:            December 28, 2021                                          *
/*  VER:             1.0                                                        *
/*  DESCRIPTION:    This program that generates an init func for DDRA register  *
/*                  in atmega32 MC, system will ask user to enter the mode for  *
                    each pin                                                    *
/*******************************************************************************
'''
import tkinter as tk

main_window = tk.Tk()
main_window.title("The last avatar")
main_window.geometry("400x400")

def write_file(DDRA):
    File = open("file.c","w+")
    File.write("void main (void)\n{\n")
    DDRA = '0b' + DDRA
    File.write("	DDRA = " + DDRA)
    File.write(";\n}")
    File.close()

def check_value(value):
    if value == '0':
        return '0'
    elif value == '1':
        return '1'
    else:
        print("Wrong Option, please try again later")

label = tk.Label(main_window, text="Please enter the mode for each pin: ").place(x=10, y=10)
label1 = tk.Label(main_window, text="Pin 1: ").place(x=10, y=40)
label2 = tk.Label(main_window, text="Pin 2: ").place(x=10, y=70)
label3 = tk.Label(main_window, text="Pin 3: ").place(x=10, y=100)
label4 = tk.Label(main_window, text="Pin 4: ").place(x=10, y=130)
label5 = tk.Label(main_window, text="Pin 5: ").place(x=10, y=160)
label6 = tk.Label(main_window, text="Pin 6: ").place(x=10, y=190)
label7 = tk.Label(main_window, text="Pin 7: ").place(x=10, y=220)
label8 = tk.Label(main_window, text="Pin 8: ").place(x=10, y=250)

def set(st, msg):
    if msg == '0':
        st = '0'
    elif msg == '1':
        st = '1'

var1 = tk.StringVar()
radio1_1 = tk.Radiobutton(main_window, text="Input", variable=var1, value='0', command=lambda: ( var1 := '0')).place(x=100, y=40)
radio1_2 = tk.Radiobutton(main_window, text="Output", variable=var1, value='1', command=lambda: (var1 := '1')).place(x=150, y=40)
var2 = tk.StringVar()
radio2_1 = tk.Radiobutton(main_window, text="Input", variable=var2, value='0', command=lambda: (var2 := '0')).place(x=100, y=70)
radio2_2 = tk.Radiobutton(main_window, text="Output", variable=var2, value='1', command=lambda: (var2 := '1')).place(x=150, y=70)
var3 = tk.StringVar()
radio3_1 = tk.Radiobutton(main_window, text="Input", variable=var3, value='0', command=lambda: (var3 := '0')).place(x=100, y=100)
radio3_2 = tk.Radiobutton(main_window, text="Output", variable=var3, value='1', command=lambda: (var3 := '1')).place(x=150, y=100)
var4 = tk.StringVar()
radio4_1 = tk.Radiobutton(main_window, text="Input", variable=var4, value='0', command=lambda: (var4 := '0')).place(x=100, y=130)
radio4_2 = tk.Radiobutton(main_window, text="Output", variable=var4, value='1', command=lambda: (var4 := '1')).place(x=150, y=130)
var5 = tk.StringVar()
radio5_1 = tk.Radiobutton(main_window, text="Input", variable=var5, value='0', command=lambda: (var5 := '0')).place(x=100, y=160)
radio5_2 = tk.Radiobutton(main_window, text="Output", variable=var5, value='1', command=lambda: (var5 := '1')).place(x=150, y=160)
var6 = tk.StringVar()
radio6_1 = tk.Radiobutton(main_window, text="Input", variable=var6, value='0', command=lambda: (var6 := '0')).place(x=100, y=190)
radio6_2 = tk.Radiobutton(main_window, text="Output", variable=var6, value='1', command=lambda: (var6 := '1')).place(x=150, y=190)
var7 = tk.StringVar()
radio7_1 = tk.Radiobutton(main_window, text="Input", variable=var7, value='0', command=lambda: (var7 := '0')).place(x=100, y=220)
radio7_2 = tk.Radiobutton(main_window, text="Output", variable=var7, value='1', command=lambda: (var7 := '1')).place(x=150, y=220)
var8 = tk.StringVar()
radio8_1 = tk.Radiobutton(main_window, text="Input", variable=var8, value='0', command=lambda: (var8 := '0')).place(x=100, y=250)
radio8_2 = tk.Radiobutton(main_window, text="Output", variable=var8, value='1').place(x=150, y=250)

button = tk.Button(main_window, text="Generate", command=lambda: (write_file(str(var1.get())+str(var2.get())+str(var3.get())+str(var4.get())+str(var5.get())+str(var6.get())+str(var7.get())+str(var8.get())))).place(x=10, y=300)
main_window.mainloop()