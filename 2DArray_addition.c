#include<stdio.h>
void main()
{
	int i=0,j=0,a[2][2],b[2][2],c[2][2];
	printf("Enter values\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter values\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\nThe addition is \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",c[i][j]=a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}
