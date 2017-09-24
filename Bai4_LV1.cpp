#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("nhap do dai a ");
	scanf("%f",&a);
	printf("nhap do dai b ");
	scanf("%f",&b);
	printf("nhap do dai c ");
	scanf("%f",&c);
	float C,S,p;
	C=a+b+c;
	p=C/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("Chu vi %0.0f",C);
	printf("\n Dien tich %0.2f",S);
}	
