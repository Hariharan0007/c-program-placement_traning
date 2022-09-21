#include<stdio.h>
void main()
{
	int arr[3][3]={1,2,3,4,5,6,7,8,9};
	//int arr[3][3] = {1,8,3,6,5,9,7,2,4};
	//int arr[3][3] = {1,1,1,1,1,1,1,1,1};
	int n=3,i,j=0,temp,min_row[3],min_index[3],max_col[3],max_index[3];
	for(i=0;i<n;i++)
	{
		min_row[i] = arr[i][0];
		min_index[i] = j;
		for(;j<n;j++)
		{
			if(min_row[i]>arr[i][j])
			{
				min_row[i]=arr[i][j];
				min_index[i]=j;
			}
		}
		j=0;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",min_row[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",min_index[i]);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		max_col[i]=arr[i][0];
		max_index[i] = i;
		for(j=0;j<n;j++)
		{
			if(max_col[i]<arr[j][i])
			{
				max_col[i] = arr[j][i];
				max_index[i] = j;
			}
			
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",max_col[i]);
	}
	printf("\n");
		for(i=0;i<n;i++)
	{
		printf("%d ",max_index[i]);
	}
	printf("\n\n");
	int flag=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(min_row[i]==max_col[j])
			{
				printf("Saddle Point : ");
				printf("%d ->",min_row[i]);
				printf("(%d , %d)",i,j);
				flag=1;
			}
		}
	}
	if(flag!=1)
		printf("No saddle point");
}
