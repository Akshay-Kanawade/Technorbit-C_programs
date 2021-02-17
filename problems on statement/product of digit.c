// product of digits.



#include<stdio.h>
void main()
{
	int a,prod=1,n;
	printf("enter the no");
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		prod=prod*a;
		n=n/10;
    }	
    
    printf("prod of digits=%d",prod);
}
