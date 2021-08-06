#include<stdio.h>
//#define x 5 //global variable
#define x printf("hello") // print text without semicolon
void main()
{
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	
	switch(a)
	{
		case 0:
			{
				printf("Zero");	
			}
		case 1:
			{
				printf("One");	
			}	
		default:
		{
			break;
		}
	}
	
}
