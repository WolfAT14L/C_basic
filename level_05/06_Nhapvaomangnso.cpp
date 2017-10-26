#include <stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,k;
	int rand(void);
	nhaplai:
	printf("Nhap vao so n ");
	scanf("%d",&n);
	if(n<1) goto nhaplai;
	int a[n];
	for(i=1;i<=n;i++) a[i]=rand()%100;
	printf("Mang vua nhap la\n");
	for(i=1;i<=n;i++) printf(" %d ",a[i]);
}
