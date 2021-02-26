#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
	
};

struct node *head,*temp,*ptr;

void create_node();
void insert_begining();
void insert_end();
void insert_random();
void delete_beg();
void delete_end();
void delete_random();
void display();


void main()
{
	int ch;
	while(ch!=9)
	{
	
	printf("\n 1.create node \n 2. insert begining \n 3. inser end \n 4.insert random \n 5. delete first \n 6. delete last \n 7. delete random \n 8. display\n");
    printf("enter the choice:");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			create_node();
			break;
		
		case 2:
			insert_begining();
			break;
		
		case 3:
			insert_end();
			break;
			
		case 4:
			insert_random();
			break;
		
		case 5:
		    delete_beg();
			break;
		
		case 6:
			delete_end();
			break;
			
		case 7:
			delete_random();
			break;
				
		case 8:
			display();
			break;
	}
	}
}

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
int data;
ptr=(struct node*)malloc(sizeof(struct node*));
printf("enter the value:");
scanf("%d",&data);
ptr->data=data;

ptr->next=head;
head=ptr;
printf("element insert\n");
}

void insert_end()
{
int data;
ptr=(struct node*)malloc(sizeof(struct node*));
printf("enter the value:");
scanf("%d",&data);
ptr->data=data;
ptr->next=NULL;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=ptr;
printf("element insert\n");
}

void insert_random()
{
	temp=head;
int data,pos,i;
ptr=(struct node*)malloc(sizeof(struct node*));
printf("enter the value:");
scanf("%d",&data);
ptr->data=data;
ptr->next=NULL;

printf("enter the position:");
scanf("%d",&pos);
for(i=1;i<pos-1;i++)
{
	temp=temp->next;
}
ptr->next=temp->next;
temp->next=ptr;
printf("element insert\n");
}

void delete_beg()
{
temp=head->next;
head=temp;
printf("element deleted\n");
}

void delete_end()
{
	struct node *pre;
	pre=temp=head;
	while(temp->next!=NULL)
	{
	pre=temp;
	temp=temp->next;
	}
	pre->next=NULL;
printf("element deleted\n");	
}

void delete_random()
{
	int pos,i;
	struct node *pre,*next;
	temp=pre=head;
	printf("enter the pos:");
	scanf("%d",&pos);
	for(i=1;i<pos;i++)
	{
		pre=temp;
		temp=temp->next;
		next=temp->next;
	}
	pre->next=next;
printf("element deleted\n");
}

void display()
{
	temp=head;
	while(temp->next!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
		
	}
	printf("%d\t",temp->data);
}

