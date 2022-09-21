#include<stdio.h>
void main()
{
	int arr[15]={10,20,30,40,50,60,70,80,90,100};
	int val,i,j,temp,n=15;
	scanf("%d",&val);
	for(i=0;i<n;i++)
	{
		if(val<=arr[i])
		{
			for(j=n;j>=i;j--)
				arr[j+1]=arr[j];
			arr[i]=val;
			break;
		}
	}
	
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
		
}
