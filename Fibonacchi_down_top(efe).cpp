#include<stdio.h>

long long memo[100];                       //This is down-top method for fibonacchi....
										   //This is a pre-calculating method & i prefer this... :)
int fib()
{
	memo[1]=1;
	memo[2]=1;
	for(int i=3;i<100;i++)
	memo[i]=memo[i-1]+memo[i-2];
}

int main()
{
	fib();
	int x;
	while(scanf("%d",&x)==1 && x)
	{
		printf("%lld\n",memo[x]);
	}
}
