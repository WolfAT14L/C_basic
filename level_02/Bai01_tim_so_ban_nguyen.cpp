#include<stdio.h>
int main()
{
	float a;
	int b;
	printf("nhap vao mot so ");
	scanf("%f",&a);
	a*=2;
	b=a;
	if (b%2==1 && b==a ) printf ("so vua nhap la so ban nguyen");
		else printf("so vua nhap k phai so ban nguyen");
}
