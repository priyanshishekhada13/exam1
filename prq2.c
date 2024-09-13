#include<stdio.h>
#include<conio.h>

void main()
{
	int n1,n2,n3;
	printf("enter n1:");
	scanf("%d",&n1);
	printf("enter n2:");
	scanf("%d",&n2);
	printf("enter n3:");
	scanf("%d",&n3);
	
	if(n1<n2)//n1,n2,n3
	{
		if(n1<n3)//
		{
			printf("n1 is lowest");
		}
		else
		{
			printf("n3 is lowest");
		}
	}
	else
	{
		if(n2<n3)
		{
			printf("n2 is lowest");
		}
		else
		{
			printf("n3 is lowest");
		}
	}
}
