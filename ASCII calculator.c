#include<stdio.h>
void main()
{
	int a;
	char b;
	
	printf("ASCII calculator\n\n");

	printf("Enter a digit\n");
	scanf("%c",&b);

	printf("\nEnter a number\n");
	scanf("%d",&a);
	
	printf("\n\nThe ASCII value is %c \n\n",a);
	
	
	printf("The ASCII value of %c is %d",b,b);
}

