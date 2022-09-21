#include<stdio.h>
void main()
{
	int arr1[3][3]={1,2,3,4,5,6,7,8,9};
	int arr2[3][3]={1,2,3,4,5,6,7,8,9};
	int i,j,sum[3][3],n=3;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			sum[i][j] = arr1[i][j]+arr2[i][j];
	}
	
	printf("Sum of Arrays :\n");
	
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
				printf("%d ",sum[i][j]);
			printf("\n");
		}
		
	printf("\n\nSum of Rows : ");
	int temp=0,sum_row[3];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			temp+=sum[i][j];
		}
		sum_row[i] = temp;
		temp=0;
	}
	
	
	
	for(i=0;i<n;i++)
		printf("%d ",sum_row[i]);
	
	
	printf("\nSum of columns :");
	int sum_col[3];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			temp+=sum[j][i];
		}
		sum_col[i] = temp;
		temp=0;
	}
	for(i=0;i<n;i++)
		printf("%d ",sum_col[i]);
		
	printf("\nMin in each row : ");
	int min_row[3];
	for(i=0;i<n;i++)
	{
		min_row[i] = sum[i][1];
		for(j=0;j<n;j++)
		{
			if(min_row[i]>sum[i][j])
				min_row[i] = sum[i][j];
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",min_row[i]);
		
	printf("\nMax in each row : ");
	int max_row[3],temp_max;
	for(i=0;i<n;i++)
	{
		max_row[i] = sum[i][1];
		for(j=0;j<n;j++)
		{
			if(max_row[i]<sum[i][j])
				max_row[i] = sum[i][j];
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",max_row[i]);
		
	printf("\nMin in each column : ");
	int min_col[3];
	for(i=0;i<n;i++)
	{
		min_col[i] = sum[i][1];
		for(j=0;j<n;j++)
		{
			if(min_col[i]>sum[j][i])
				min_col[i] = sum[j][i];
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",min_col[i]);
		
	printf("\nMax in each column : ");
	int max_col[3];
	for(i=0;i<n;i++)
	{
		max_col[i] = sum[i][1];
		for(j=0;j<n;j++)
		{
			if(max_col[i]<sum[j][i])
				max_col[i] = sum[j][i];
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",max_col[i]);
		
	printf("\nDiagonal : ");
	int diag[3];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
				diag[i] = sum[j][i];
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",diag[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
				printf("%d",diag[i]);
			else
				printf("  ");
		}
		printf("\n");
	}
	
	
	//upper and lower triangular matrix
	int up_mat[3][3] = {1,2,3,0,4,5,0,0,7},up_flag=0;
	int lw_mat[3][3] = {1,0,0,3,4,0,5,6,7},lw_flag=0;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",up_mat[i][j]);
		printf("\n");
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i!=j&&j<n-1)
				if(up_mat[i][j]==0)
					up_flag=1;
				else
					up_flag=0;
			//printf("%d ",up_mat[i][j]);
		}
		//printf("\n");
	}
	if(up_flag!=0)
		printf("It is Upper triangular matrix\n");
	else
		printf("It is not Upper triangular matrix\n");
	
	
		
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d ",lw_mat[i][j]);
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<n;j++)
		{
			if(i!=j&&i<n-1)
				if(lw_mat[i][j]==0)
					lw_flag=1;
				else
					lw_flag=0;
			//printf("%d ",lw_mat[i][j]);
		}
		//printf("\n");
	}
	if(lw_flag!=0)
		printf("It is lower triangular matrix\n");
	else
		printf("It is not lower triangular matrix\n");
}
