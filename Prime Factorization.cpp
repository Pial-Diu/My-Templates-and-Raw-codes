#include<stdio.h>                             //PRIME FACTORIZATION//
#include<math.h>

#define max 10000000        //This is the range...
#define maxp 664580         //this value is pre-calculated my me...

bool ar[max];
int prime[maxp];

void sieve()
{
    int x=0;
    for(int i=2 ; i<=sqrt(max) ; i++)
        for(int j=i*i ; j<= max ; j+=i)
            if(ar[j]!=1)
            ar[j]=true;

    for(int i=2;i<max;i++)       //i=2 means we are not counting 1 as a prime....
        if(ar[i]==0)
        prime[++x]=i;
}

int main()
{
    int x;
    sieve();
    while(scanf("%d",&x)==1)
    {
        for(int i=1;i<x;i++)
        {
            if(x%prime[i]==0)
            {
                while(x%prime[i]==0)
                {
                    printf("%d ",prime[i]);
                    x/=prime[i];
                }
            }
        }
        if(x!=1)                       // in this case the value of x is a prime it-self...
            printf("%d",x);
        printf("\n");
    }
    return 0;
}
