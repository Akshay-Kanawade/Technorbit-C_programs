//fib series

#include<stdio.h>
void main()
{
	int a,b,i,c,n;
	printf("enter the no:");
	scanf("%d",&n);
	a=0;
	b=1;
	printf("%d\t%d\t",a,b);
	for (i=2;i<=n;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\t",c);
	}
}
