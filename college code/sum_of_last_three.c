#include<stdio.h>
void main()
{
	int n=1234,sum=0,temp,count=0,rev=0;
	printf("last digit = %d\n",n%10);
	//for(i=0;i<3;i++) //===> for three digits
	while(n!=0) //===>  for all digits
	{
		rev*=10;
		temp = n%10;
		n/=10;
		sum+=temp;
		count++;
		rev+=temp;
	}
	printf("\n\nsum : %d",sum);
	printf("\n\ncount : %d",count);
	printf("\n\n Reverse : %d",rev);
}
