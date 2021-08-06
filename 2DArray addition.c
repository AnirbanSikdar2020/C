#include<stdio.h>
void main()
{
	int i=0,j=0,a[2][2],b[2][2],c[2][2];
	printf("Enter values");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("Enter values");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	/*for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",c[i][j]=a[i][j]+b[i][j]);
		}
		printf("\n");
	}*/
}
