#include<stdio.h>
//#define x 5 //global variable
#define x printf("hello") // print text without semicolon
void main()
{
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	
	a==5 ? printf("Five") : printf("Ten"); //Ternary Operator
	
}
