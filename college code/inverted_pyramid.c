#include<stdio.h>
void main()
{
	int n,i,j,temp;
	scanf("%d",&n);
	temp = 2*n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<i;j++)
			printf(" ");
		for(j=i;j<=temp-1;j++)
			printf("*");
		
		printf("\n");
		temp--;
	}
}
