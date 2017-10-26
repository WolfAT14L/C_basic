#include<stdio.h>
int main()
{
	int i,j,n;
	int a[5][5];
	n=0;
	for (i=0;i<5;i++)
		for (j=0;j<5;j++)
		{
			a[i][j]=n+++1;
		}
	printf("Mang vua nhap la\n");
	for (i=0;i<5;i++)
	{	
		for (j=0;j<5;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
}
