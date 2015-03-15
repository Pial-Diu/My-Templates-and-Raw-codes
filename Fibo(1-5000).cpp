#include<stdio.h>
#include<string.h>
#define row 5001
#define col 1100

int ar[row][col];

void fibo()
{
    ar[0][col-1]=0,ar[1][col-1]=1,ar[2][col-1]=1;
    for(int i=3;i<row;i++)
    {
        int carry=0,ans=0;
        for(int x=col-1;x>=0;x--)
        {
            ar[i][x]=(carry+ar[i-1][x]+ar[i-2][x])%10;
            carry=(carry+ar[i-1][x]+ar[i-2][x])/10;
        }
    }
}

int main()
{
    fibo();
    int x;
    while(scanf("%d",&x)==1)
    {
        int flag=0;
        printf("The Fibonacci number for %d is ",x);
        if(x==0)
        {
            printf("0");
        }
        else
        for(int i=0;i<col;i++)
        {
            if(ar[x][i]!=0)
                flag=1;
            if(flag==1)
            printf("%d",ar[x][i]);
        }
        printf("\n");
    }
    return 0;
}
