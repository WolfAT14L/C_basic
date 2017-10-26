#include<stdio.h>
int main()
{
	int i,j,n;
	int a[5][5],c[5][5];
	n=0;
	for (i=0;i<5;i++)
		for (j=0;j<5;j++)
		{
			a[i][j]=n+++1;
		}
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			c[j][i]=a[i][j];
	printf("Mang da cho la\n");
	for(j=0;j<5;j++)
	{	
		for(i=0;i<5;i++)
			printf("%d\t",c[j][i]);
		printf("\n");
	}
}
