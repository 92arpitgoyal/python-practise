from tkinter import *

def doNothing():
	print("OK oK I won't.....")

root = Tk()

menu_1 = Menu(root)
root.config(menu=menu_1)

submenu = Menu(menu_1)
menu_1.add_cascade(label="File", menu=submenu)

submenu.add_command(label="New Project", command=doNothing)
submenu.add_command(label="New File", command=doNothing)
submenu.add_command(label="Open Existing Project", command=doNothing)

submenu.add_separator()

submenu.add_command(label="Exit", command=doNothing)

editMenu = Menu(menu_1)
menu_1.add_cascade(label="Edit", menu=editMenu)
editMenu.add_command(label="Redo", command=doNothing)

#************ toolbar**************
toolbar = Frame(root, bg="blue")

insertButt = Button(toolbar, text="Insert Image", command=doNothing)
insertButt.pack(side=LEFT, padx=2, pady=2)
printButt = Button(toolbar, text="Print", command=doNothing)
printButt.pack(side=LEFT, padx=2, pady=2)

toolbar.pack(side=TOP, fill=X)

#************ Status bar **********

status = Label(root, text="preparing to do nothing...", bd=1, relief=SUNKEN, anchor=W)
status.pack(side=BOTTOM, fill=X)


root.mainloop()