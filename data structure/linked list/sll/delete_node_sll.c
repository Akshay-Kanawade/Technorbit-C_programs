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

void delete_begining()
{
	printf("delete the element at first position:\n");
       
       temp=head;
		head=head->next;
		free(temp);
		printf("element deleted\n");
		
}	

void delete_end()
{
	printf("delete the element at end:\n");
	
		struct node *pre;
		temp=head;
		while(temp->next!=0)
		{   pre=temp;
			temp=temp->next;
		}
		pre->next=0;
		free(temp);
		printf("element deleted\n");
}
void delete_at_position()
{
	printf("delete the element at given position:\n");
	int i,pos;
	struct node *pre;
		printf("enter the position:");
		scanf("%d",&pos);
		temp=head;
		for(i=0;i<pos-1;i++)
		{
			pre=temp;
			temp=temp->next;
		}
		pre->next=temp->next;
		free(temp);
		printf("element deleted\n");
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
	delete_begining();
	delete_end();
	delete_at_position();
	display();	
	
}
