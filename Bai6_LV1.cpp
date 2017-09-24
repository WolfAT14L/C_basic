#include<stdio.h>
int main()
{
	int a,b,c;
	printf("nhap so nguyen 3 chu so ");
	scanf("%d",&a);
	c=a%10;
	a=a/10;
	b=a%10;
	a=a/10;
	printf("so sau khi bi dao la %d",c);
	printf("%d",b);
	printf("%d",a);
}
