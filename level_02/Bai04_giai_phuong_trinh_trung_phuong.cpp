#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,x1,x2;
	printf("nhap cac so a, b, c cua phuong trinh trung phuong ");
	scanf("%f%f%f",&a,&b,&c);
	d=pow(b,2)-4*a*c;
	x1=(-pow(b,2)-sqrt(d))/(2*a);
	x2=(-pow(b,2)+sqrt(d))/(2*a);
	if (d>0 && x1>0 && x2> 0) printf("phuong trinh co 4 nghiem x1= %.1f \t x2= %.1f \t x3= -%.1f \t x4= -%.1f",x1,x2,x1,x2);
	if (d>0)
		if(x1>0||x2>0)
			if (x1>x2)	printf("phuong trinh co 2 nghiem x1= %.1f \t x2= -%.1f ",x1,x1);
				else printf("phuong trinh co 2 nghiem x1= %.1f \t x2= -%.1f ",x2,x2);
		else printf("phuong trinh vo ngiem");
	if (d<0) printf("phuong trinh vo ngiem"); 
}
