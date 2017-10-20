#include<stdio.h>
#include<math.h>
int main()
{	int i,j,n,x,c;
	nhaplai: ;
	printf("Nhap so phan tu n: ");
	scanf("%d",&n);
	if (n<0) goto nhaplai;
	int a[n], b[n];
	for (i=0;i<n;i++)
	{	printf("\nNhap  so thu a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("nhap mot gia tri X ");
	scanf("%d", &x);
	for (i=0;i<n;i++)
		{	b[i]=abs(a[i]-x);}
	c=b[0];
	for (i=1;i<n;i++)
		{	if(c>b[i]) c=b[i];}
	for (i=1;i<n;i++)
	{	if(c==b[i]) printf("Gia tri gan x nhat la %d",a[i]);}
}





