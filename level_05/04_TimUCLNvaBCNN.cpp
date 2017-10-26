#include<stdio.h>
int main()
{
	int i,n,a,b,max,min;
	printf("Nhap vào a ");
	scanf("%d",&a);
	printf("Nhap vao b ");
	scanf("%d",&b);
	if(a<b) 
	{
		max=b;
		min=a;
	}
		else 
		{
			max=a;
			min=b;
		}
	for(i=min;i>=1;i--)
	{
		if(a%i==0 && b%i==0)	
		{
			printf("UCLN cua %d va %d la %d",a,b,i);
			break;
		}
	}
	for(i=max;i<=(a*b);i++)
	{
		if(i%a==0 && i%b==0)	
		{
			printf("\nBCNN cua %d va %d la %d",a,b,i);
			break;
		}
	}
}
