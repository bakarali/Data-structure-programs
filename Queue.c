#include<stdio.h>
#include<stdlib.h>
#define max 5
struct node{
	int data;
	struct node* link;
};
struct node* front = NULL;
struct node* rear = NULL;
struct node* t = NULL;
void insert();
void delete();
void display();	
int main(){
	int ch;
	
	while(1){

		printf("\n1 : insert \n2 : delete \n3 : display \n");
		printf("Enter your choice : ");
		scanf("%d",&ch);
		switch(ch){
			case 1:insert();break;
			case 2:delete();break;
			case 3:display();break;
			default	: printf("Invalid choice");
		}
	}

	
return 0;
}
void insert(){
	int item;
	t = (struct node*)malloc(sizeof(struct node));
	printf("Enter element");
	scanf("%d",&item);
	t->data =item; 
	t->link = NULL;
	if(front == NULL && rear == NULL){
		front = rear = t;
		return;
	}
	rear->link = t;
	rear = t;

}
void delete(){
struct Node* t = front;
	if(front == NULL) {
		printf("Queue is Empty\n");
		return;
	}
	if(front == rear) {
		front = rear = NULL;
	}
	else {
		front = front->link;
	}
	free(t);
}
void display(){
struct node* temp = front;
	while(temp!=NULL) {
		printf("%d\n",temp->data);
		temp = temp->link;
	}
	printf("\n");
}

