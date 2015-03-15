#include<stdio.h>

#define max 1001
#define len 2600

int fact[max][len];

void factorial()
{
    int i,j;
    fact[0][0]=fact[1][0]=1;
	for(i=2;i<max;i++)
	{
		for(j=0;j<len;j++)
		{
			fact[i][j]+=fact[i-1][j]*i;
			if(fact[i][j]>9)
			{
				fact[i][j+1]+=fact[i][j]/10;
				fact[i][j]%=10;
			}
		}
	}
}


int main()
{
    long long x;
    factorial();
    while(scanf("%lld",&x)==1 && x)
    {
        int i;
        for(i=len-1;i>=0;i--)
            if(fact[x][i]!=0)    break;

        for(;i>=0;i--)
            printf("%d",fact[x][i]);

        printf("\n");
    }
    return 0;
}
