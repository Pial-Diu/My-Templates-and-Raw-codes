#include<stdio.h>

long long memo[100][100];

long long ncr(int n,int r)
{
	if(r==0) return 1;
	if(n==0) return 0;
	if(memo[n][r]!=-1) return memo[n][r];
	memo[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
	return memo[n][r];
}

int main()
{
    for(int i=0;i<100;i++)
		for(int j=0;j<100;j++)
			memo[i][j]=-1;

	long long n,r;
	while(scanf("%lld %lld",&n,&r)==2)
	{
		if(n==0 && r==0) break;
		printf("%lld\n",ncr(n,r));
	}
	return 0;
}
