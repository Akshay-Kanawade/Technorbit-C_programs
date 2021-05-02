// linked list 
//1. Write a C program to search a given data in singly linked list.



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
	int data;
	int found=0;
	temp=head;
	int count=0;
	printf("enter the data to be search:");
	scanf("%d",&data);	
	do
	{
		if(temp->data==data)
		{
			found=1;
			printf("%d found at loc %d",data,count+1);
			break;
		}
		temp=temp->next;
		count+=1;
	}while(temp->next!=0);
	if(found==0)
		printf("data not found");
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
