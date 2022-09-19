#include<stdio.h>
void main()
{
	int n,i,j;
	scanf("%d",&n);
	
	printf("--------SQUARE----------\n\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("*");
		printf("\n");
	}
	
	printf("----------HALLOW SQUARE-----------\n\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			if(i==j||i==1||j==1||i==n||j==n||(n-i+1)==j)
				printf("*");
			else
				printf(" ");
		printf("\n");
	}
}
