def push():
	if len(stack)>=max:
		print("stackue is full")
	else:
		stack.append(int(input("Enter element : ")))

def pop1():
	if len(stack)==0:
		print("stackue empty!!")
	else:
		stack.pop()

def display():
	if len(stack)==0:
		print("stackue empty!!")
	else:
		print(stack)

max = 5
stack = []
ch=0
while (1):
	print("1 : Insert \n2 : Delete \n3 : Display\n4 : Exit")
	ch = int(input("Enter your choice"))
	if ch == 1:
		push()	
	elif ch == 2:
		pop1()
	elif ch == 3:
		display()
	elif ch == 4:
		break	
	else:
		printf("Invalid choice")	

