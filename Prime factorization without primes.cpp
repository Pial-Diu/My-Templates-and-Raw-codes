#include<stdio.h>        //PRIME FACTORIZATION WITHOUT FAINDING PRIMES//
#include<math.h>

int main()
{
    int x;
    while(scanf("%d",&x)==1 && x)
    {
        for(int i=2;i<=sqrt(x);i++)
        {
            if(x%i==0)
            while(x%i==0)
            {
                printf("%d ",i);
                x/=i;
            }
        }
        if(x!=1)
                printf("%d",x);
        printf("\n");
    }
    return 0;
}
