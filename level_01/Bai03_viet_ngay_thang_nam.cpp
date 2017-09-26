#include <stdio.h>
	int main()
	{
		int d, m ,y;
		printf("nhap vao ngay ");
		scanf("%d",&d);	
		printf("nhap vao thang ");
		scanf("%d",&m);
		printf("nhap vao nam ");
		scanf("%d",&y);
		
		if (d<10) {printf("ngay 0%d ",d);} else printf("ngay %d ",d);
		if (m<10) {printf("thang %d ",m);} else printf("ngay %d ",m);
		y=y%100;
		printf("nam %d ",y);
	}
