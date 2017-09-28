#include<stdio.h>
#include<math.h>
#define PI 3.1415
int main()
{
	int a;
	printf("Nhap 1 de tinh cv,dt hinh tam giac \nNhap 2 de tinh cv,dt hinh vuong \nNhap 3 de tính cv,dt hinh chu nhat \nNhap 4 de tinh cv,dt hinh tron \n");
	scanf("%d",&a);
	if (a==1)
		{	
			float a,b,c,C,S,p;
			printf("Nhap do dai 3 canh cua tam giac ");
			scanf("%f%f%f",&a,&b,&c);
			C=a+b+c;
			p=C/2;
			S=sqrt(p*(p-a)*(p-b)*(p-c));
			printf("Chu vi %0.2f",C);
			printf("\nDien tich %0.2f",S);
		}
		else if (a==2) 
			{
			float a,C,S;
			printf("Nhap do dai canh hinh vuong ");
			scanf("%f",&a);
			S=a*a;
			C=4*a;
			printf("Chu vi %0.2f",C);
			printf("\nDien tich %0.2f",S);
			}
			else if (a==3)
				{
				float a,b,C,S;
				printf("Nhap do dai 2 canh cua hinh chu nhat ");
				scanf("%f%f",&a,&b);
				S=a*b;
				C=2*a+2*b;
				printf("Chu vi %0.2f",C);
				printf("\nDien tich %0.2f",S);	
				}
				else if (a==4)
					{
					float a,C,S;
					printf("Nhap do dai ban kinh r ");
					scanf("%f",&a);
					S=a*a*PI;
					C=2*a*PI;
					printf("Chu vi %0.2f",C);
					printf("\nDien tich %0.2f",S);
					}
	else printf ("Ban da nhap sai ma so \nXin moi ban mo lai chuong trinh");
}
