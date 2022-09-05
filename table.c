#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);
	int i;
	char c='*';
	for(i=1;i<=10;i++)
	{
		if(i==10)
		printf("%2d %c %d = %d\n",i,c,n,n*i);
		else
		printf("%d %2c %d = %d\n",i,c,n,n*i);
	}
}