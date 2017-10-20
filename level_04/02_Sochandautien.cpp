#include<stdio.h>
int main()
{	int i,n,c=-1;
	nhaplai: ;
	printf("Nhap so phan tu n: ");
	scanf("%d",&n);
	if (n<0) goto nhaplai;
	int a[n];
	for (i=0;i<n;i++)
	{	printf("\nNhap  so thu a[%d]",i);
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
		if (a[i]%2==0)
			{	c=a[i];
				break ;
			}
	printf("Gia tri so chan dau tien la %d",c);
}
