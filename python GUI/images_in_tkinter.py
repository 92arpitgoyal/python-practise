from tkinter import *

root = Tk()

photo = PhotoImage(file="images/1410885607_snow-4-128.png")
label = Label(root, image=photo)
label.pack()

root.mainloop()