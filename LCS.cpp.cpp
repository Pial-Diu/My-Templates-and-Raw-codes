#include <bits/stdc++.h>
#define pf printf
#define sf scanf
#define MAX 110

using namespace std;

int dp[MAX][MAX];

int main()
{
    int m,n,t=1;
    while(sf("%d %d",&m,&n)==2 && m && n)
    {
        int ar[m+1],br[n+1];
        for(int i=1;i<=m;i++)
            sf("%d",&ar[i]);

        for(int i=1;i<=n;i++)
            sf("%d",&br[i]);

        memset(dp,0,sizeof(dp));
        for(int i=1;i<=m;i++)
            for(int j=1;j<=n;j++)
            {
                if(ar[i]==br[j])  dp[i][j] = dp[i-1][j-1] + 1;
                else dp[i][j] = max (dp[i-1][j],dp[i][j-1]);
            }
        pf("Twin Towers #%d\n",t++);
        pf("Number of Tiles : %d\n\n",dp[m][n]);
    }
    return 0;
}
