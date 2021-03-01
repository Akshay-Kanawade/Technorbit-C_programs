// bubbel sort

#include<stdio.h>

int bubbel_sort(int a[],int n)
{
	int i,j,temp;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
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
	
	bubbel_sort(a,n);
	printf("\nthe sorted element is:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
