#include<stdio.h>
void main()
{
	int n,space,i,k;
	scanf("%d",&n);
	space=1;
	for(i=n-1;i>0;i--)
	{
		for(k=0;k<space;k++)
		{
			printf(" ");
			
		}
		for(k=0;k<i;k++)
		{
			printf("*");
		}
	}
	space--;
	printf("\n");
}
