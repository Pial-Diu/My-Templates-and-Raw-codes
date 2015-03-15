#include <bits/stdc++.h>

using namespace std;

#define pf printf
#define sf scanf
#define Max 10000000
#define Maxp 784980

int ar[Max>>5];
int prime[Maxp+7];

bool check(int n,int k){
    return (bool)(n & (1<<k));
}

int seet(int n,int k){
    return n = (n | (1<<k));
}

void sieve()
{
    int xa = sqrt(Max);
    for(int i=3;i<=xa;i+=2)
        if(!check(ar[i>>5],i&31))
            for(int j=i*i;j<=Max;j+=i<<1)
                ar[j>>5] = seet(ar[j>>5],j&31);
    int k=1;
    prime[k] = 2;
    for(int i=3;i<=Max;i+=2) if(check(ar[i>>5],i&31)==0) prime[++k] = i;
}

int main()
{
    sieve();

    for(int i=1;i<=20;i++) pf("%d  ",prime[i]);

    return 0;
}

