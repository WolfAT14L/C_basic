#include <stdio.h>
int main()
{
	int i,n,k;
	nhaplai:
	printf("Nhap vao so n ");
	scanf("%d",&n);
	if(n<1) goto nhaplai;
	int a[n];
	int *p;
	for(i=1;i<=n;i++) a[i]=i;
	p=a;
	printf("nhap vao mot so k ");
	scanf("%d",&k);
	printf("Cac so tu 1 toi n chia het cho k la ");
	for(i=1;i<=n;i++)
		if (a[i]%k==0) printf(" %d ",*(p+i));
}
