// sum of digits.



#include<stdio.h>
void main()
{
	int a,sum=0,n;
	printf("enter the no");
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		sum=sum+a;
		n=n/10;
    }	
    
    printf("sum of digits=%d",sum);
}
