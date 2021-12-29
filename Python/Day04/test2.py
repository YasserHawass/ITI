import tkinter as tk

main_window = tk.Tk() # should be in the first lines, to prevent "it's too early to create widgets" type of errs


main_window.title("The last avatar")
main_window.geometry(f"{500}x{500}+200+100") # width x height, but you can use format on the string
main_window.resizable(1,0) # (1,0) means you can resize in width, but not height
main_window.configure(background='snow')

# ititialize the widgets
label_obj = tk.Label(main_window, text="Please write your password:")
entry_obj = tk.Entry(main_window , width=50, show="*", bg='black', fg='white', font=('Calibri', 20))
button_obj = tk.Button(main_window, text="me me Click me!", bg='fuchsia', command=lambda: print(f"HEhe your password is {entry_obj.get()}") if len(entry_obj.get()) else print("you meanie, you didn't enter anything!"))


selected_radio_button = tk.IntVar()
def radioButtonfunc():
    global selected_radio_button
    print(selected_radio_button.get())
radiobutton_obj = tk.Radiobutton(main_window, text="option 1", command = radioButtonfunc, value=1, variable=selected_radio_button, bg='black', fg='white', font=('Calibri', 20))


window_obj = tk.Toplevel(main_window, name="window")

# place the widgets
label_obj.pack(fill=tk.BOTH, expand=0)
entry_obj.pack(fill=tk.BOTH, expand=0)
button_obj.pack(fill=tk.NONE, expand=0)
radiobutton_obj.pack(fill=tk.NONE, expand=0)
# render the window
main_window.mainloop()


