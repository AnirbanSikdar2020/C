/*#include<stdio.h>
void main()
{
	int a,b,c;
	
	printf("Enter A ");
	scanf("%d",&a);
	
	printf("Enter B ");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Swapping: a:%d  b:%d ",a,b);
}
*/

//swapping in one line without third variable

#include<stdio.h>
void main()
{
	int a,b,c;
	
	printf("Enter A ");
	scanf("%d",&a);
	
	printf("Enter B ");
	scanf("%d",&b);
	
	a=a+b-(b=a);
	
	printf("Swapping: a:%d  b:%d ",a,b);
}
