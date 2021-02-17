// multiplication tabel



#include<stdio.h>
void main()
{
	int i=1,n;
	printf("enter the no");
	scanf("%d",&n);
	
	while(i<=10)
	{
	    printf("%d * %d  =%d\n",n,i,i*n);
	    i++;
	}	
}
