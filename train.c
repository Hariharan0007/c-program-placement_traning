#include<stdio.h>
void main()
{
	int n,i,j;
	scanf("%d",&n);
	
	/*
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}*/
	
	//right_triangle
	/*for(i=1;i<=n;i++)
	{
		for(j=i;j<n;j++)
			printf(" ");
		for(j=1;j<=i;j++)
			printf("*");
		printf("\n");
	}*/
	
	/*    *
      * *    *
    * * *     * *
  * * * *    * * *
* * * * *     * * * *  */
	
	for(i=1;i<=n;i++)
		{
		for(j=i;j<n;j++)
			printf(" ");
		for(j=1;j<=2*i-1;j++)
			if(j==1||j==2*i-1)
				printf("*");
			else
				printf(" ");
		printf("\n");
		}
	n--;
	int temp = 2*n;
	for(i=1;i<=n;i++)
		{
		for(j=1;j<=i;j++)
			printf(" ");
		for(j=i;j<=temp-1;j++)
			if(j==i||j==temp-1)
				printf("*");
			else
				printf(" ");
		printf("\n");
		temp--;
		}
	
		
		
		
		
		
	

}