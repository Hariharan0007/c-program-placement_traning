#include<stdio.h>
void main()
{
	int n,i,j,temp;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<n;j++)
			printf(" ");
		for(j=1;j<=2*i-1;j++)
			printf("*");
		
		printf("\n");
	}
	n--;
	temp=2*n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf(" ");
		for(j=i;j<=temp-1;j++)
			printf("*");
		
		printf("\n");
		temp--;
	}
}
