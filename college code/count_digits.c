#include<stdio.h>
void main()
{
	int n=1234,count=0;
	while(n!=0) 
	{
		n/=10;
		count++;
	}
	printf("\n\ncount : %d",count);
}
