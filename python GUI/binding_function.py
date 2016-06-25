from tkinter import *

root = Tk()

def printName():
	print("Chello is my name")

button_1 = Button(root, text="print my name", command=printName)
button_1.pack()

root.mainloop()