l1=[]
top = 0
def push():
	if len(l1)>5:
		print("stack is full")	
	else:			
		l1.append(int(input("Enter element in stack")))
def pop1():
	if len(l1)<0:
		print("stack is empty")	
	else:	
		l1.pop()
def display():
	print(l1)
while(1):
	print("1 : PUSH\n2 : POP\n3 : DISPLAY\n4 : EXIT")	
	ch = int(input("Enter choice"))
	if(ch==1):		
		push()
		
	elif(ch==2):
		pop1()

	elif(ch==3):
		display()
	elif(ch==4):
		break
	else:
		print(" Invalid choice")

	





