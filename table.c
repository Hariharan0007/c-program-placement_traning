#include<stdio.h>
void main()
{
	int n,count=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	int i,temp;
	char c='*';
	for(i=1;i<=50;i++)
	{
		temp =i;
		do
		{
			temp/=10;
			++count;
		}while(temp!=0);
		if(count>1)
		printf("%2d %c %d = %d\n",i,c,n,n*i);
		else
		printf("%d %2c %d = %d\n",i,c,n,n*i);
		count = 0;
	}
}