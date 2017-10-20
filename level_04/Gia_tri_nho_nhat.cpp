#include<stdio.h>
int main ()
{
	int i, min;
	int a[10];
	for( i=1;i<11;i++)
		{
			printf("Phan tu thu %d= ",i);
			scanf("%d", &a[i]);
		}
	min=a[1];
	for( i=2;i<11;i++)
	{
		if (min>a[i]) min=a[i];
	}
	printf("Gia tri nho nhat cua mang la %d",min);
}
