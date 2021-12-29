import tkinter as tk

main_window = tk.Tk()


# print("befire mainloop")
# main_window.mainloop()
# print("after mainloop") # won't exectue till main_window is closed


main_window.title("The last avatar")
main_window.geometry(f"{500}x{500}+200+100") # width x height, but you can use format on the string
main_window.resizable(1,0) # (1,0) means you can resize in width, but not height
main_window.configure(background='#bdd6ee') # userfriendly background color <3

button1 = tk.Button(main_window, text="Click me", command=lambda: print("Hello from 1"))
button2 = tk.Button(main_window, text="Click me", command=lambda: print("Hello from 2"))

# to use BOTH, witout tk.BOTH
# from tkinter import BOTH

# button1.pack(fill=tk.NONE, expand=1) # won't fill huge space, but will take a margin of the whole space
# button1.pack(fill=tk.BOTH, expand=0) # will not expand, but will fill the whole x section available
# button1.pack(fill=tk.NONE, expand=0) # default values
# button1.pack(fill=tk.BOTH, expand=1) # will take whole available space
# button2.pack()


# main_window.grid_columnconfigure(10, minsize=100) # 10 is the column number, maxsize is the max size
# main_window.grid_rowconfigure(10, minsize=100) # 10 is the row number, minsize is the min size
# button1.grid(row=1, column=1)
# button2.grid(row=1, column=2)

button1.place(x = 10, y = 10)
button2.place(x = 10, y = 50)



main_window.mainloop()


