import tkinter as tk

main_window = tk.Tk()
main_window.title("The last avatar")

Btn1 = tk.Button(main_window, text="Print Name", command=lambda: print("Hello Yourself"), bg='blue')
Btn2 = tk.Button(main_window, text="Okay", command=lambda: print("Okay"), bg='green')
Btn3 = tk.Button(main_window, text="Close", command=lambda: main_window.destroy(), bg ='red')

Btn1.place(x = 10, y = 10)
Btn2.place(x = 30, y = 100)
Btn3.place(x = 90, y = 100)

main_window.mainloop()