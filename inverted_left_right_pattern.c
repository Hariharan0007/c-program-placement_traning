#include<stdio.h>
void main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=n;i>0;i--)
	{
		for(j=1;j<=i;j++)
			printf("*");
		for(j=1;j<=2*(n-i)+1;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");
		
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf("*");
		for(j=1;j<=2*(n-i)+1;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}
	
}