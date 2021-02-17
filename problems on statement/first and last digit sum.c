// first and last digits sum.



#include<stdio.h>
void main()
{
	int last,first,a,sum=0,n;
	printf("enter the no");
	scanf("%d",&n);
	last=n%10;
	while(n>=10)
	{
		a=n%10;
		n=n/10;
    }	
    first=n;
    sum=last+first;
    printf("last digit:%d \nfirst digit=%d\n sum of digits=%d",last ,first,sum);
}
