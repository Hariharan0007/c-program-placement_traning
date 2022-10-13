#include <stdio.h>

int main()
{
    //int mat[5][5] = {1,0,0,0,0,4,2,0,0,0,6,5,1,0,0,1,2,3,4,0,1,1,1,1,1},n=5,flag=0;
    int n,flag=0,mat[10][10];
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&mat[i][j]);
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=1;j<n;j++)
            if(i!=j&&j>i)
                if(mat[i][j]!=0)
                    flag++;
    }
    
    (flag==0)?printf("Lower Triangular Matrix"):printf("Not a lower Triangular Matrix");


    return 0;
}
