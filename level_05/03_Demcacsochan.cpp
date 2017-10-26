#include<stdio.h>
int main()
{
	int i,n,c=0;
	nhaplai:
	printf("Nhap vao so n ");
	scanf("%d",&n);
	if(n<1) goto nhaplai;
	int a[n];
	for(i=1;i<=n;i++) a[i]=i;
	for (i=1;i<=n;i++)
		if(a[i]%2==0) c+=1;
	printf("Co %d so chan tu 1 den n",c);
}
