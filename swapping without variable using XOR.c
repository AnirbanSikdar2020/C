#include<stdio.h>
void main()
{
	int a,b,c;
	
	printf("Enter A ");
	scanf("%d",&a);
	
	printf("Enter B ");
	scanf("%d",&b);
	
	//XOR operation (11=0  10=1) the numbers are converted in binary and thus swapping is possible
	a=a^b;
	b=a^b;
	a=a^b;
	printf("Swapping: a:%d  b:%d ",a,b);
}
