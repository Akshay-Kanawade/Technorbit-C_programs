// first and last digits.



#include<stdio.h>
void main()
{
	int last,first,a,n;
	printf("enter the no");
	scanf("%d",&n);
	last=n%10;
	while(n>=10)
	{
		a=n%10;
		n=n/10;
    }	
    first=n;
    printf("last digit:%d \nfirst digit=%d\n",last ,first);
}
