#include<stdio.h>
int main()
{	int i,n;
	float c=-1;
	nhaplai: ;
	printf("Nhap so phan tu n: ");
	scanf("%d",&n);
	if (n<0) goto nhaplai;
	float a[n];
	for (i=0;i<n;i++)
	{	printf("\nNhap  so thu a[%d]",i);
		scanf("%f",&a[i]);
	}
	for (i=0;i<n;i++)
		if (a[i]>0) c=a[i];
	printf("Gia tri so duong cuoi cung la %f",c);
}
