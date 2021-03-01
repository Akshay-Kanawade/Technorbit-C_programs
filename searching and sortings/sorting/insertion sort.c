// insertion sort

#include<stdio.h>

int insertion_sort(int a[],int n)
{
	int i,j,temp;
	
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			
			a[j+1]=a[j];
			j--; 
		}
		a[j+1]=temp;
	}
	return 0;
}
void main()
{
	int a[10],n,i;
	
	printf("enter the size of array:");
	scanf("%d",&n);
	

	printf("enter the  element is:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("entered element is:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	
	insertion_sort(a,n);
	printf("\nthe sorted element is:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
