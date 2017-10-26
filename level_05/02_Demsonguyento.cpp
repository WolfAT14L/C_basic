#include <stdio.h>
int main()
{
	int i,n,j,c=0;
	nhaplai:
	printf("Nhap vao so n ");
	scanf("%d",&n);
	if(n<1) goto nhaplai;
	int a[n];
	for(i=1;i<=n;i++) a[i]=i;
	for(i=1;i<=n;i++)
	{	
		if(a[i]<2) c+=0;
    		else if(a[i]==2) c+=1;
    			else if(a[i]%2==0) c+=0;
    				else
    				{
        				for(j=3;j<=a[i];++j)
	        			{	
    	        			if(a[i]%j==0)
        	        		break;
        				}
        				if(a[i]==j) c+=1;
        					else c+=0;
    				}
	}
	printf("\nCo %d cac so nguyen to ti 1 den n",c);
}
