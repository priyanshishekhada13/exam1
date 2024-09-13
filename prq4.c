#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,count;
	printf("enter n:");
	scanf("%d",&n);
	
	for(count<=0; n>0; count++)
	{
		n=n/10;
	}
	printf("count is %d",count);
}
