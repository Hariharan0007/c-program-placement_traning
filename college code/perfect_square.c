#include<stdio.h>
void main()
{
	int n,i,flag=0;
	printf("\nEnter the element : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		if(i*i==n)
			{
				flag=1;
				printf("%d is a Perfect square",n);
			}
	if(flag==0)
		printf("%d is not a Perfect square",n);
}
