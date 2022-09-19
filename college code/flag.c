#include<stdio.h>
void main()
{
	int i,j,l=15
	
	,b=4,k,m;
	printf("\n\n\n\n");
	for(i=1;i<=20;i++)
	{
		if(i<=4)
		{
			for(k=1;k<=b;k++)
			{
				for(j=1;j<=30;j++)
					printf(" ");
				for(m=1;m<=l;m++)
					printf("*");
				printf("\n");
			}
		}
		else
		{
		for(j=1;j<=30;j++)
			printf(" ");
		for(j=1;j<=1;j++)
			printf("*");
		printf("\n");
		}
	}
}
