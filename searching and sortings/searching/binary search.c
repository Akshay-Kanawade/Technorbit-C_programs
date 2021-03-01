// bineary search

#include<stdio.h>

binary_search(int a[],int n,int ele,int l,int r)
{
	int i;
	
	int	mid =(l+r)/2;
	
	if (a[mid]==ele)
	{
		printf("ele found at loc:%d",mid);	
	}
	else
	if( a[mid]>ele)
	{
		r=mid-1;
		binary_search(a,n,ele,l,r);
	}
	else
	{
	l=mid+1;
	binary_search(a,n,ele,l,r);	
	}
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
	int l=0,r=n-1;
	binary_search(a,n,ele,l,r);
}
