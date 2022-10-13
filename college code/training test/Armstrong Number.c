#include <stdio.h>

int main()
{
    int n,temp,count,sum=0,rem,mul=1,arm;
    scanf("%d",&n);
    temp = n;
    while(temp!=0)
    {
        temp/=10;
        count++;
    }
    
    temp = n;
    while(temp!=0)
    {
        rem=temp%10;
        for(int i=1;i<=count;i++)
            mul *= rem;
        sum+=mul;
        temp/=10;
        mul = 1;
    }
    
    (n==sum)?printf("%d is armstrong number",n):printf("%d is not an armstrong number",n);
    
    return 0;
}
