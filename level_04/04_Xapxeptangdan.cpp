#include<stdio.h>
int main()
{	int i,j,n,c;
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
		{	for (j=i+1;j<n;j++)
			{	if (a[i]>a[j])
				{	c=a[i];
					a[i]=a[j];
					a[j]=c;
				}
			}
		}
	printf("Day so sau khi xep tang dan la ");
	for (i=0;i<n;i++) printf(" %d ",a[i]);
}
