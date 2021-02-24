/* addition of 2d array */



#include<stdio.h>
void main()
{
 	int a[10][10],i,n,j,m,b[10][10],c[10][10]={0};
 	////no of row and col 
 	printf("enter the no of ele n & m:\n");
 	scanf(" %d",&n);
 	scanf(" %d",&m);
 	
 	//input for 1st array
 	printf("enter the 1st array element:\n");
 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<m;j++)
 		scanf("%d",&a[i][j]);
    }
    
    // input for 2nd array 
    printf("enter the 2nd array element:\n");
 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<m;j++)
 		scanf("%d",&b[i][j]);
    }
    // array addition
    for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    		c[i][j]+=a[i][j]+b[i][j];
	}
    
    // print result of 2d array addition
    printf("2d array ele is:\n");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	printf("%d\t",c[i][j]);
    	//next line
    	printf("\n");
	}
 	
	
	
}
