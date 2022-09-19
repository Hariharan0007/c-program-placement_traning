#include<stdio.h>
void main()
{
	int n,i,j;
	scanf("%d",&n);
	printf("-----------><><><>",n);
	for(i=n;i<=1;i--)
	{
		printf("i--->%d\n",i);
		for(j=i;j>=1;j--)
		{
			printf("j--->%d\n",j);
			if(j<=i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
