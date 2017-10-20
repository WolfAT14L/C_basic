#include<stdio.h>
int main()
{
	int i,n,min;
	printf("Nhap so phan tu n: ");
	scanf("%d",&n);
	int a[n];
	min=a[0];
	for (i=0;i<n;i++)
	{
		printf("\nNhap  so thu a[%d]",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		if (min>=a[i]) min=a[i];
	}
	printf("Min: %d",min);
}
