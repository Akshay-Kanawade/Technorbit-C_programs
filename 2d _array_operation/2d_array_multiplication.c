// substraction of 2d array 

//in array multiplication the no of rows of one array is equal to no of col of another array

#include<stdio.h>
void main()
{
 	int a[10][10],i,n,j,k,q,m,b[10][10],c[10][10]={0};
 	//no of row and col 
 	printf("enter the no of ele n & m for 1st matrix:\n");
 	scanf(" %d\n %d",&n,&m);
 
 	printf("enter the no of ele for col q in 2nd matrix:\n");
 	scanf(" %d",&q);


 	//input for 1st array
 	printf("enter the 1st matrix element:\n");
 	for(i=0;i<n;i++)
 	{
 		for(j=0;j<m;j++)
 		scanf("%d",&a[i][j]);
    }
    
    // input for 2nd array 
    printf("enter the 2nd array element:\n");
 	for(i=0;i<m;i++)
 	{
 		for(j=0;j<q;j++)
 		scanf("%d",&b[i][j]);
    }
    // array multiplication
    for(i=0;i<n;i++)
    {
    	for(j=0;j<q;j++)
    	{
    		c[i][j]=0;
		for(k=0;k<m;k++)
    		c[i][j]+=a[i][k]*b[k][j];
		}
	}
    
    // print result of 2d array multiplication
    printf("2d array ele is:\n");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	printf("%d\t",c[i][j]);
    	//next line
    	printf("\n");
	}
 	
	
	
}
