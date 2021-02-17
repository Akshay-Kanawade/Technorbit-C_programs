// no of digits.



#include<stdio.h>
void main()
{
	int count=0,a,n;
	printf("enter the no");
	scanf("%d",&n);
	
	while(n!=0)
	{
		a=n%10;
		count++;
		n=n/10;
    }	
    printf("no of digit:%d",count);
}
