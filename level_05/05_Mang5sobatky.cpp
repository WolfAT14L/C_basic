#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	int a[5];
	int Random(void);
	for(i=1;i<=5;i++) a[i]=rand()%100;
	printf("Mang voi 5 so bat ky la\n");
	for(i=1;i<=5;i++) printf(" %d ",a[i]);	
}
