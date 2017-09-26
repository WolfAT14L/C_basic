#include<math.h>
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("nhap so a ");
	scanf("%f",&a);
	printf("nhap so b");
	scanf("%f",&b);
	a=log(a);
	b=1/(log(b));
	c=a*b;
	printf(" gia tri cua log(a)/log(b) la %f ",c);
}
