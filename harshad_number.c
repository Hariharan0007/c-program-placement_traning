#include<stdio.h>
void main()
{
	int n,i,temp,sum=0;
	scanf("%d",&n);
	temp = n;
	while(temp!=0)
	{
		temp%=10;
		sum+=temp;
		temp/=10;
	}
	(n%sum==0)?printf("%d is a Harshad number.",n):printf("%d is not a Harshad number.",n);
}