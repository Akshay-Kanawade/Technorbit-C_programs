//  create 2d array 



#include<stdio.h>
void main()
{
 	int a[10][10],i,n,j,m;
 	
 	printf("enter the no of ele:");
 	scanf("%d",&n);
 	scanf("%d",&m);
 	
 	printf("enter the element:\n");
 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<m;j++)
 		scanf("%d",&a[i][j]);
    }
    
    printf("2d array ele is:\n");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	printf("%d\t",a[i][j]);
    	
    	printf("\n");
	}
 	
	
	
}
