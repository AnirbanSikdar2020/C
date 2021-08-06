 #include<stdio.h>
#include<string.h>
int fact(int i)
{
	if(i!=1)
	{
		return i*fact(i-1);
	}
	else
	{
		return 1;
	}
}

void main()
{
	int i;
	
	printf("Factorial Calculator using Recursion");
	printf("\n\nEnter Number\n");
	scanf("%d",&i);
	int result=fact(i);
	
	printf("The factorial of %d is %d ",i,result);
}
