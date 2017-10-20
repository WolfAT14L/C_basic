#include<stdio.h>
int main()
{	int i,j,n,c=-1,min;
	nhaplai: ;
	printf("Nhap so phan tu n: ");
	scanf("%d",&n);
	if (n<0) goto nhaplai;
	int a[n],b[n];
	for (i=0;i<n;i++)
	{	printf("\nNhap  so thu a[%d]",i);
		scanf("%d",&a[i]);
	}
	min=10000;
	for (i=0;i<n;i++)
		{	if (a[i]%2==0)	
			{	 if(min>=a[i]) min=a[i];	
			}	
		}
	if (min==0) printf("Gia tri chan nho nhat la %d",c);
		else printf("Gia tri chan nho nhat la %d",min);
}
