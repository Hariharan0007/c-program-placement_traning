#include<stdio.h>
void main()
{
	int i,j;
	int arr[5] = {1,2,4,7,5};
	int min = arr[0];
	for(i=0;i<5;i++)
		for(j=i+1;j<5;j++)
			if(arr[i]>arr[j])
			{
				min = arr[j];
				arr[j] = arr[i];
				arr[i] = min;
			}
	
	for(i=0;i<5;i++)
		printf("%d ",arr[i]);
}
