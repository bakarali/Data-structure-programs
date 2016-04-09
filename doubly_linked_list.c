#include<stdio.h>
#include<stdlib.h>
#define max 5
struct node{
	int data;
	struct node* l_link;
	struct node* r_link;
};
struct node* h = NULL;
struct node* t = NULL;
struct node* n = NULL;
void insertbegin(){
	int item;
	n  = (struct node*)malloc(sizeof(struct node));
	printf("Enter data : ");
	scanf("%d",&item);
	n->data = item;
	n->l_link = NULL;
	n->r_link = NULL;
	if(h==NULL){
		h=n;

	}else{
		n->r_link = h;
		h->l_link = n;
		h=n;

		
	}
}

void insertend(){
	int item;
	n  = (struct node*)malloc(sizeof(struct node));
	printf("Enter data : ");
	scanf("%d",&item);
	n->data = item;
	n->l_link = NULL;
	n->r_link = NULL;
	if(h==NULL){
		h=n;
	}else{
			t=h;
		while(t->r_link !=NULL){
			t=t->r_link;
		}
		t->r_link = n;
		n->l_link = t;

		
	}
}
void insertloc(){
	int item,elem,flag=0,i=0;
	t=h;
	n  = (struct node*)malloc(sizeof(struct node));
	printf("Enter an element location");
	scanf("%d",&elem);
	printf("Enter data : ");
	scanf("%d",&item);
	n->data = item;
	n->l_link = NULL;
	n->r_link = NULL;
	if(h==NULL){
		printf("no list");
	}else if(h->r_link == NULL){
		if(h->data==elem){
			h->l_link = n;
			n->l_link = NULL;
			n->r_link = h;
			h = n;
			flag = 1;
		}
	}else if(h->r_link != NULL && h->data == elem){
		printf("e5");
		n->r_link = h;
		h->l_link = n;
		h=n;
		flag = 1;
	}else{
		while(t!= NULL){
			if(t->data == elem){
					n->l_link = t->l_link;
					n->r_link = t;
					t->l_link->r_link = n;								
					t->l_link = n;
					flag = 1;
			}
			t = t->r_link;
		}
	}
	if(flag == 0){
		printf("element is not found");
	}
	
}

void deletebegin(){
	if(h==NULL){
		printf("No list");
	}else{
		if(h->r_link == NULL){
			t=h;
			h=NULL;
			free(t);
		}else{
			t=h;
			h=h->r_link;
			h->l_link=NULL;
			h->l_link = NULL;
			free(t);
		}
	}
}
void deleteend(){
	struct node* v = NULL;
	if(h==NULL){
		printf("No list");
	}else if(h->r_link == NULL){
		v=h;
		h=NULL;
		free(v);		
	}else{
		t=h;
		while(t->r_link != NULL){
			t=t->r_link;
		}
				
		v=t;
		t->l_link->r_link = NULL;		
		free(v);
	}
	
}

void deleteloc(){
	int ele,flag=0;
	struct node* v = NULL;
	struct node* x = NULL;
	t=h;
	v=t;
	if(h==NULL){
		printf("No list");
	}else{
		printf("Enter the element for delete");
		scanf("%d",&ele);

		if(h->r_link == NULL){
			if(h->data == ele){

				h=NULL;
				free(t);	
			}
		}else{
			if(h->r_link != NULL){
				if(h->data == ele){
					h=t->r_link;					
					t->r_link->l_link =NULL;
					free(t);
					flag = 1;		
				}
			}
			while(t->r_link != NULL){
				if(t->data == ele){
					x=t->l_link;
					t->l_link->r_link = t->r_link;
					t->r_link->l_link = x;
					free(t);
					flag = 1;		
					break;
				}				
				t=t->r_link;
				}
			if(t->r_link == NULL && t->data==ele){
				t->l_link->r_link = NULL;
				free(t);		
				flag = 1;			
			}
		}			
	}
	if(flag == 0){
		printf("Element not found");	
	}		
}


void display(){
	t=h;
	if(h==NULL){
		printf("no list");
	}else{
		while(t!= NULL){
			printf("|%d|\n",t->data);
			t=t->r_link;
		}
	}
}
void deletepos(){
	int c,pos;
	struct node* x = NULL;
	t=h;
	if(h==NULL){
		printf("no list");	
	}else{
		printf("Enter Position");
		scanf("%d",&pos);
		while(t->r_link!= NULL){
			t=t->r_link;
			c=c+1;
		}
		c=c+1;
		if(pos>c){
			printf("can't delete");
		}else{
			c=1;t=h;
			if(pos == 1){
				if(h->r_link == NULL){
					h=NULL;
					free(t);
				}else{
					h=t->r_link;					
					t->r_link->l_link =NULL;
					free(t);
				}
			}else{
				while(t->r_link!= NULL){
					if(pos == c){						
						x=t->l_link;
						t->l_link->r_link = t->r_link;
						t->r_link->l_link = x;
						free(t);	
						break;
					}
					c=c+1;
					t=t->r_link;
				}	
				if(t->r_link == NULL){
					if(pos == c){	
						t->l_link->r_link = NULL;
						free(t);	
					}

				}
			}
		}
			
	}

}
void insertpos(){
	int pos=1,c=1,item;	
	n  = (struct node*)malloc(sizeof(struct node));
	printf("Enter position");
	scanf("%d",&pos);
	printf("Enter data ");
	scanf("%d",&item);
	n->data =item;
	t=h;
	while(t->r_link!= NULL){
			t=t->r_link;
			c=c+1;
		}
		c=c+1;
	if(pos > c){
		printf("can't insert");
	}else{
		if(h==NULL){
			printf("d");
			if(pos==1){
				n->l_link = NULL;
				n->r_link = NULL;
				h=n;
			}
		}else{
			t=h;
			if(h!=NULL && pos == 1){
				n->l_link = NULL;
				n->r_link = h;
				h=n;
			}else{
				while(t->r_link != NULL){
				
				}
			}
		}
	}
}
int main(){
	int ch;
	while(1){

		printf("\n1 : insert begin \n2 : insert end\n3 : insertloc \n4 : insert pos \n5 : delete begin \n6 : delete end  \n7 : delete at location\n8 : delete at position\n9 : display \n10 : exit \n");
		printf("Enter your choice : ");
		scanf("%d",&ch);
		switch(ch){
			case 1:insertbegin();break;
			case 2:insertend();break;
			case 3:insertloc();break;
			case 4:insertpos();break;	
			case 5:deletebegin();break;
			case 6:deleteend();break;
			case 7:deleteloc();break;
			case 8:deletepos();break;						
			case 9:display();break;
			case 10:exit(1);
			default : printf("Invalid choice");
		}
	}
return 0;
}
