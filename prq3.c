#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	printf("enter n:");
	scanf("%d",&n);
	
	int i=n; 
	while(i>=1)
	{
		printf("%d",i);
		i--;
	}
}
