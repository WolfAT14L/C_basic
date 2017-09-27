#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,x1,x2;
	printf("nhap he so a, b, c cua phuong trinh bat 2 ");
	scanf("%f%f%f",&a,&b,&c);
	d=pow(b,2)-4*a*c;
	x1=(-pow(b,2)-sqrt(d))/(2*a);
	x2=(-pow(b,2)+sqrt(d))/(2*a);
	if (d>0) printf("phuong trinh co 2 nghiem x1= %.1f \t x2= %.1f \n",x1,x2);
	if (d==0) printf("phuong trinh co 1 nghiem x= %.1f \n",x2);
	if (d<0) printf("phuong trinh vo ngiem"); 
}
