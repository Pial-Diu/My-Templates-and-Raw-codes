#include<stdio.h>                    //NUMBER OF DIVISOR//
#include<math.h>

#define max 10000000
#define maxp 664579

bool ar[max];
int prime[maxp];

void sieve()
{
    int x=0;
    for(int i=2 ; i<=sqrt(max) ; i++)
        for(int j=i*i ; j<=max ; j+=i)
            if(ar[j]!=true)
            ar[j]=true;

    for(int i=2 ; i<=max ; i++)
        if(ar[i]==false)
        prime[++x]=i;
}

int main()
{
    int x,gt,t;
    sieve();
    while(scanf("%d",&x)==1)
    {
        gt=1;
        for(int i=1 ; i<=x ; i++)
        {
            t=1;
            if(x%prime[i]==0)
            {
                while(x%prime[i]==0)
                {
                    t++;
                    x=x/prime[i];
                }
                gt=gt*t;
            }
        }
        if(x!=1)
            gt=gt*2;
        printf("%d\n",gt);
    }
    return 0;
}
