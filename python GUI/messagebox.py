from tkinter import *
import tkinter.messagebox

root = Tk()

tkinter.messagebox.showinfo('Window Title', 'Monkey Can live for only 5 years')

answer = tkinter.messagebox.askquestion('Question 1', 'Do you like Miley Cyrus')

if answer == 'yes':
	print('muahhh :P')

root.mainloop()