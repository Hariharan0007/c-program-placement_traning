#include<stdio.h>
void main()
{
	int n,count=0,arm=0,temp,rem,i,num;
	scanf("%d",&n);
	temp=n;
	num=n;
	while(temp!=0) 
	{
		temp/=10;
		count++;
	}

	while(n!=0)
	{
		temp=1;
		rem=n%10;
		for(i=1;i<=count;i++)
			temp*=rem;
		arm+=temp;
		n/=10;
	}
	
	(arm==num)?printf("Armstrong number"):printf("Not an Armstrong Number");
}
