// palindrome  no.



#include<stdio.h>
void main()
{
	int a,rev=0,n,pal;
	printf("enter the no");
	scanf("%d",&n);
	pal=n;
	
	while(n!=0)
	{
		a=n%10;
		rev=rev*10+a;
		n=n/10;
    }	
    if (pal==rev)
    {
    	printf("no is palindrome");
	}
	else
	{
		printf("no is not palindrome");
	}
}
