#include<stdio.h>
void main()
{
	int arr[15] = {1,2,3,1,3,4,5,6,5,8,7,7,7,8,8};
	int i,j,count=0;
	
	for(i=0;i<15;i++)
	{
		for(j=0;j<15;j++)
			if(arr[i]==arr[j])
				count++;
		//printf("%d--%d--count->%d\t\n",i+1,arr[i],count);
		if(count==1)
			printf("\n%d\n",arr[i]);
		count=0;
	}
}
