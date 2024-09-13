#include<stdio.h>
#include<conio.h>

void main()
{
	char a,e,i,o,u,alphabet;
	printf("enter alphabet:");
	scanf("%c",&alphabet);

	
	switch(alphabet)
	{
	
	case'a':printf("alphabet is vowel");
	break;
	case'e':printf("alphabet is vowel");
	break;
	case'i':printf("alphabet is vowel");
	break;
	case'o':printf("alphabet is vowel");
	break;
	case'u':printf("alphabet is vowel");
	break;
	default:printf("alphabet is constant");
	}
	
}
