#include<stdio.h>
void main()
{
	int arr[5][5];
	int row=5,col=5,count=1,i,j,n=5;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
		{
			arr[i][j] = count;
			count++;
		}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%d ",arr[i][j]);
		printf("\n");
	}
	
	// four variables starting row,ending row,starting column,ending column-->
	/*
	1.print starting row [for i=sr_col;i<=end_col;i++] printf("%d",a[sr_row][i]
	2.Incrementing starting row
	3.printing 
	4.decrementing ending column
	5.print ending colun to starting row
	while(starting row <= ending row && starting column <= ending column)
	{
		starting row
		ending column
		ending row
		start column
	}
	*/
	printf("\n\n");
	int st_row=0,end_row=4,st_col=0,end_col=4;
	while(st_row<=end_row && st_col<=end_col)
	{
		for(i=st_col;i<=end_col;i++)
			printf("%d ",arr[st_row][i]);
		st_row++;
		
		for(i=st_row;i<=end_row;i++)
		
			printf("%d ",arr[i][end_col]);
		
		end_col--;
		
		for(i=end_col;i>=st_col;i--)
		
			printf("%d ",arr[end_row][i]);
		
		end_row--;
		
		for(i=end_row;i>=st_row;i--)
		
			printf("%d ",arr[i][st_col]);
		
		st_col++;
		
	
	}
	
	
	
	
	
}
