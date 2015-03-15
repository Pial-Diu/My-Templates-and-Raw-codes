#include <bits/stdc++.h>
#define Max 1000
#define sf scanf
#define pf printf

using namespace std;

int ar[Max];
int dp[Max];
int n;

int lis(int i)
{
    if(dp[i]!=-1)    return dp[i];
    int maxi=0;
    for(int j = i+1 ; j < n ; j++)
    {
        if(ar[j] > ar[i])
            if(lis(j) > maxi)   maxi = lis(j);
    }
    dp[i]=1+maxi;
    return dp[i];
}

int main()
{
    while(sf("%d",&n)==1 && n)
    {
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++)
            sf("%d",&ar[i]);

        int i,LIS=0,start;
        for(i=0;i<n;i++)
        {
            if(lis(i) > LIS)
            {
                LIS=lis(i);
                start=i+1;
            }
        }
        pf("LIS = %d   starting point = %d\n",LIS,start);
    }
    return 0;
}

