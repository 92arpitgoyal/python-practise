from tkinter import *

root = Tk()

one = Label(root, text="One", bg="red", fg="white")
one.pack()
three = Label(root, text="One", bg="blue", fg="white")
three.pack(fill=X)
two = Label(root, text="two", bg="green", fg="yellow")
two.pack(fill=Y, side=LEFT)

root.mainloop()