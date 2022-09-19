#include<stdio.h>
void main()
{
	int n=15,i,j;
	int arr[15] = {1,2,2,4,3,5,4,5,8,9,5,5,5,5,5};
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{	if(j==i)
				continue;
			if(arr[i]==arr[j])
				break;
		}
		if(j==n)
			printf("%d",arr[i]);

	}
	
	printf("\n\n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++) 
			if(arr[i]==arr[j])
				break;
		if(j==i)
			printf("%d",arr[i]);
	}
}
