#include <bits/stdc++.h>                      ///Light oj- 1197///

using namespace std;

#define Max 50000
#define Maxp 5136
#define Maxn 100010
#define pf printf
#define sf scanf
#define ll long long

bool ar[Max];
int prime[Max];

void sieve()
{
    int sq = sqrt(Max);
    for(int i=3;i<sq;i+=2)
    if(ar[i]==false)
        for(int j=i*i;j<=Max;j+=2*i)
        if(ar[j]==false)  ar[j]=true;

    int k = 0;
    prime[++k]=2;
    for(int i=3;i<=Max;i+=2)   if(ar[i]==false)  prime[++k]=i;
}

bool br[Maxn];

int m_sieve(int a,int b)
{
    memset(br,0,sizeof(br));
    int cut=0;
    for(int i=1;prime[i]<=sqrt(b);i++)
    {
        int cur = prime[i];
        int st=(cur-(a%cur));
        if(st==cur) st=0;

        for(int j = st;j<=(b-a);j+=cur)
        {
            if(j+a == cur) continue;
            br[j]=true;
        }
    }
    for(int i=0;i<=(b-a);i++) if(br[i]==false && i+a!=1)  cut++;

    return cut;

}

int main()
{
    sieve();
    int t=1,T,a,b;
    sf("%d",&T);
    while(T--)
    {
        sf("%d %d",&a,&b);
        pf("Case %d: %d\n",t++,m_sieve(a,b));
    }
    return 0;
}

