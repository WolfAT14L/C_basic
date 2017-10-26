#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n;
	int rand(void);
	int a[4][5],b[5][4];
	for (i=0;i<4;i++)
		for (j=0;j<5;j++)
			a[i][j]=rand()%100;
	printf("Mang vua nhap la\n");
	for(i=0;i<4;i++)
	{	
		for(j=0;j<5;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
	for(i=0;i<4;i++)
		for(j=0;j<5;j++)
			b[j][i]=a[i][j];
	printf("Mang vua chuyen vi xong la\n");
	for(j=0;j<5;j++)
	{	
		for(i=0;i<4;i++)
			printf("%d\t",b[j][i]);
		printf("\n");
	}
}
