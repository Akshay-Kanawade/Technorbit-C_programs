//strong number

#include<stdio.h>
void main()
{
	int a,n,i,fact=0,num,temp;
	printf("enter the no:");
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		num=n%10;
		fact=1;
		for(i=num;i>0;i--)
		{
			fact=fact*i;
		}
		temp+=fact;
		n=n/10;
	}
	if(temp==a)
	{
		printf("%d is strong no",a);
	}
	else
	{
		printf("not");
	}
}
