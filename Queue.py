def insert():
	if len(que)>=max:
		print("queue is full")
	else:
		que.append(int(input("Enter element : ")))

def delete():
	if len(que)==0:
		print("queue empty!!")
	else:
		que.pop(0)

def display():
	if len(que)==0:
		print("queue empty!!")
	else:
		print(que)

max = 5
que = []
ch=0
while (1):
	print("1 : Insert \n2 : Delete \n3 : Display\n4 : Exit")
	ch = int(input("Enter your choice"))
	if ch == 1:
		insert()	
	elif ch == 2:
		delete()
	elif ch == 3:
		display()
	elif ch == 4:
		break	
	else:
		printf("Invalid choice")	

