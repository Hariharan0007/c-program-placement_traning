#include<stdio.h>
void main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
		if(n%i==0)
			sum+=i;
	(sum>n)?printf("%d is a Abundant number.",n):printf("%d is a not Abundant number.",n);	
}