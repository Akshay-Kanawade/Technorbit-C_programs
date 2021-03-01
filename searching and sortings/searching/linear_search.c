// linear search

#include<stdio.h>

linear_search(int a[],int n,int ele)
{
	int i, flag=0;
	for(i=0;i<n;i++)
	{
		if (ele==a[i])
		{
			flag=1;
			break;
		}
		
	}
	if(flag==1)
			printf("ele found at loc:%d",i);
	else
		printf("ele not found ");	
}
void main()
{
	int a[10],ele,n,i;
	
	printf("enter the size of array:");
	scanf("%d",&n);
	
	printf("enter the element:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("enter the ele which u have to search:");
	scanf("%d",&ele);
	
	linear_search(a,n,ele);
}
