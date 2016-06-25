from tkinter import *

root = Tk()

canvas = Canvas(root, width=200, height=100)
canvas.pack()

blackline = canvas.create_line(0, 0, 112, 12)

redline = canvas.create_line(0, 100, 112, 12, fill="red")

root.mainloop()