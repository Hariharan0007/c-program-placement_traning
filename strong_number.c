#include<Stdio.h>
void main()
{
	int n,i,j,rem,temp,mul=1,sum=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	temp = n;
	while(temp!=0)
	{
		rem = temp%10;
		while(rem!=0)
		{
			mul *= rem;
			rem--;
		}
		sum += mul;
		temp/=10;
		mul = 1;
	}
	if(n==sum)
		printf("%d is a Strong number.",n);
	else
		printf("%d is not a Strong number.",n);
}