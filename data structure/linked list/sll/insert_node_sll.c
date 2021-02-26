// create a linked list

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *ptr,*temp,*head=0;

void create_node()
{
	int choice;
	
	do
	{
		printf("create node\n");
		ptr=(struct node*)malloc(sizeof(struct node*));
		
		printf("enter the data:\n");
		scanf("%d",&ptr->data);
		ptr->next=0;
		if(head==0)
		{
			head=temp=ptr;
			
		}
		else
		{
			temp->next=ptr;
			temp=temp->next;
		}
	
		printf("do you want to continue(0,1):\n");
		scanf("%d",&choice);
		}while(choice);
}

void insert_begining()
{
	printf("insert the element at first position:\n");
        printf("create node\n");
		ptr=(struct node*)malloc(sizeof(struct node*));
		
		printf("enter the data:\n");
		scanf("%d",&ptr->data);
		
		ptr->next=head;
		head=ptr;
}	

void insert_end()
{
	printf("insert the element at end:\n");
	printf("create node\n");
		ptr=(struct node*)malloc(sizeof(struct node*));
		
		printf("enter the data:\n");
		scanf("%d",&ptr->data);
		ptr->next=0;
		temp=head;
		while(temp->next!=0)
		{
			temp=temp->next;
		}
		temp->next=ptr;
}
void insert_position()
{
	printf("insert the element at given position:\n");
	int i,pos;
	printf("create node\n");
		ptr=(struct node*)malloc(sizeof(struct node*));
		
		printf("enter the data:\n");
		scanf("%d",&ptr->data);
		ptr->next=0;
		printf("enter the position:");
		scanf("%d",&pos);
		temp=head;
		for(i=0;i<pos-1;i++)
		{
			temp=temp->next;
		}
		ptr->next=temp->next;
		temp->next=ptr;
}
void display()
{
	temp=head;
	while(temp->next!=0)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}

void main()
{
	
	create_node();
	insert_begining();
	insert_end();
	insert_position();
	display();	
	
}
