#include<stdio.h>
void main()
{
	int n,i,flag=0;
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
		if(n%i==0)
			flag=1;
	(flag==0)?printf("%d is a Prime number.",n):printf("%d is not a Prime number",n);
}