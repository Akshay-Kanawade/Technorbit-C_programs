// swap first and last digits.



#include<stdio.h>
void main()
{
	int last,first,rev=0,a,n;
	printf("enter the no");
	scanf("%d",&n);
	last=n%10;
	while(n>=10)
	{
		rev=rev*10+n%10;
		n=n/10;
    }	
    first=n;
   while(rev>=10)
   {
   	last=last*10+rev%10;
   	rev=rev/10;
   }
   last=last*10+first;
   printf("after swap=%d\n",last);
}
