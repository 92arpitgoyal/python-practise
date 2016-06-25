from tkinter import *

root = Tk()

def leftClick(event):
	print("Left button clicked")

def middleClick(event):
	print("Middle button clicked")

def rightClick(event):
	print("Right button clicked")

frame = Frame(root, width=300, height=250)
frame.bind("<Button-1>", leftClick)
frame.bind("<Button-2>", middleClick)
frame.bind("<Button-3>", rightClick)

frame.pack()

root.mainloop()