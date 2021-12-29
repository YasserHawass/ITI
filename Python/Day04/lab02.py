import tkinter as tk

main_window = tk.Tk()
main_window.title("The last avatar")

Btn1 = tk.Button(main_window, text="Button 1", command=lambda: print("Hello from 1"))
Btn2 = tk.Button(main_window, text="Button 2", command=lambda: print("Hello from 2"))
Btn3 = tk.Button(main_window, text="Button 3", command=lambda: print("Hello from 3"))
Btn4 = tk.Button(main_window, text="Button 4", command=lambda: print("Hello from 4"))

main_window.grid_columnconfigure(3, minsize=10)
main_window.grid_rowconfigure(3, minsize=10)


Btn1.grid(row=0, column=1)
Btn2.grid(row=1, column=0)
Btn3.grid(row=1, column=2)
Btn4.grid(row=2, column=1)

main_window.mainloop()