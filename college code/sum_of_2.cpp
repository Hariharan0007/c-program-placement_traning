#include<stdio.h>
void main()
{
	int arr1[3][3]={1,2,3,4,5};
	int arr2[3][3]={1,2,3,4,5};
	int sum[3][3];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j] = arr1[i][j]+arr2[i][j];
		}
	}
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				printf("%d ",sum-[i][j]);
			printf("\n");
		}
}
