#include<stdio.h>

int add(int i,int j)
{
	int add=i+j;
	return add;
}
int sub(int i,int j)
{
	int sub=i-j;
	return sub;
}
int mult(int i,int j)
{
	int mult=i*j;
	return mult;
}
int div(int i,int j)
{
	int div=i/j;
	return div;
}
void main()
{
	int i,j,opt;
		
	printf("CALCULATOR");
	printf("\n\nEnter 1st Number\n");
	scanf("%d",&i);
	printf("Enter 2nd Number\n");
	scanf("%d",&j);
	printf("choose Operation\nADD='1'\nSUB='2'\nMULT='3'\nDIV='4'\n\n");
	scanf("%d",&opt);
	
	if(opt==1)
	{
		printf("\nThe addition of %d and %d is %d",i,j,add(i,j));
		printf("\n\nDo you want to continue?(Yes/No)");
		/*scanf("%c",&o);
		if(opt=="Y")
		{
			main();
		}*/
	}
	else if(opt==2)
	{
		printf("The substraction of %d and %d is %d",i,j,sub(i,j));
		printf("\n\nDo you want to continue?(Yes/No)");
		/*scanf("%s",&opt);
		if(opt=="Yes")
		{
			main();
		}*/
	}
	else if(opt==3)
	{
		printf("The multiplication of %d and %d is %d",i,j,mult(i,j));
		printf("\n\nDo you want to continue?(Yes/No)");
		/*scanf("%s",&opt);
		if(opt=="Yes")
		{
			main();
		}*/
	}
	else if(opt==4)
	{
		printf("The division of %d and %d is %d",i,j,div(i,j));
		printf("\n\nDo you want to continue?(Yes/No)");
		/*scanf("%s",&opt);
		if(opt=="Yes")
		{
			main();
		}*/
	}
	else
	{
		printf("\nplease enter correct operation as below\n ADD\nSUB\nMULT\nDIV\n");
		printf("Do you want to continue?(Yes/No)");
		/*scanf("%c",&o);
		if(o=='Y')
		{
			main();
		}*/
	}
	
}
