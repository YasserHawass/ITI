import tkinter as tk

main_window = tk.Tk()
main_window.title("The last avatar")

Btn1 = tk.Button(main_window, text="Button 1", command=lambda: print("Hello from 1"))
Btn2 = tk.Button(main_window, text="Button 2", command=lambda: print("Hello from 2"))
Btn3 = tk.Button(main_window, text="Button 3", command=lambda: print("Hello from 3"))
Btn4 = tk.Button(main_window, text="Button 4", command=lambda: print("Hello from 4"))

Btn1.place(x = 10, y = 10)
Btn2.place(x = 40, y = 40)
Btn3.place(x = 70, y = 70)
Btn4.place(x = 100, y = 100)

main_window.mainloop()