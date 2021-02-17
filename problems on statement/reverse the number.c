// reverse the no.



#include<stdio.h>
void main()
{
	int a,rev=0,n;
	printf("enter the no");
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		rev=rev*10+a;
		n=n/10;
    }	
    
    printf("rev of digits=%d",rev);
}
