#include<stdio.h>
void main()
{
	int n,space,i,k;
	scanf("%d",&n);
	space=n-1;
	for(i=0;i<=n;i++)
	{
		for(k=0;k<=space;k++)
		{
			printf("*");
			
		}
		for(k=0;k<i;k++)
		{
			printf("*");
		}
	}
	space--;
	printf("\n");
}
