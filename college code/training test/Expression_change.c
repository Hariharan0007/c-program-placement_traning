#include <stdio.h>

int main()
{
    char str[30]="a-(b+c)+(a-b)-(a+b+c)",temp;
    int count=0,i=0,flag=0,j;
    
    while(str[i]!='\0')
    {
        if(str[i]=='(')
        {
            temp = str[i-1];
            flag=1;
        }
        if(str[i]==')')
            flag=0;
        if(flag==1)
        {
            if(str[i]=='+')
                if(temp=='-')
                    str[i]='-';
        }
        i++;
    }
    
    i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='('||str[i]==')')
        {
            j=i;
            while(str[j]!='\0')
            {
                str[j]=str[j+1];
                j++;
            }
        }
        i++;
    }
    
    printf("%s",str);
    
    return 0;
}
