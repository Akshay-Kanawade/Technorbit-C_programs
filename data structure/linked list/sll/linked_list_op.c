#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct node *head=0,*next=0,*temp=0,*ptr=0;

void create_node(struct node *ptr)
{
	int data;
	printf("Enter the value:");
	scanf("%d",&data);
	ptr->data=data;
	if(head == 0)
	{
	head=ptr;
	}
	else
	{
		temp=head;
		while(temp->next!=0)
		{
			temp=temp->next;
		}
		temp->next=ptr;
	}
}

display_data(struct node *head)
{
	temp=head;
	do{
		printf("%d/t",temp->data);
		temp=temp->next;
	}while(temp->next!=0);
}
void main()
{
	ptr=(struct node*)malloc(sizeof(struct node));
	
	create_node(ptr);
	create_node(ptr);
	create_node(ptr);
	
	display_data(head);
}
