// linked list 
// 3. Write a C program to find second highest element in singly linked list.


# include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};
struct node *temp,*head,*ptr;
int item;

void Create_LL();
void search_data();
void Display();

void main()
{
	int ch;
	printf("1. Create Linked:\n List 2. search_data:\n 3.Display data:\n" );
	while(ch<=9)
	{	
 	printf("\nenter the choice");
 	scanf("%d",&ch);
 	switch(ch)
 	{
 		case 1:
 			Create_LL();
 			break;
 	
	 	case 2:
 			search_data();
 			break;
	
		case 3:
 			Display();
 			break;
 			
	 }
	}
	
}

void Create_LL()
{
	ptr=(struct node*)malloc(sizeof(struct node));
	
	printf("Enter the data:");
	scanf("%d",&item);
	ptr->data=item;
	ptr->next=0;
	
	if(head==0)
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

void search_data()
{
	int max,smax;
	temp=head;
	max=head->data;
	smax=head->data;
	do
	{
		temp=temp->next;
		if(temp->data>=max)
		{
			smax=max;
			max=temp->data;
		}
		else
		{
			if(temp->data>=smax)
			smax=temp->data;
		}
	}while(temp->next!=0);
	printf("max:%d\n",max);
	printf("second max:%d",smax);
}

void Display()
{
	printf("Linked list element is:");
	temp=head;
	while(temp->next!=0)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}
