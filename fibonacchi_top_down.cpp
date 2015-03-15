#include<stdio.h>
#include<math.h>

int memo[100];                               //This is top-down method for fibonacchi..
                                             //This is easy but slow...
int fib(int n)
{
	for(int i=0;i<100;i++)
		memo[i]=-1;
	
	if(n==1) return 1;
	if(n==2) return 1;
	if(memo[n]!=-1) return memo[n];
	memo[n]=fib(n-1)+fib(n-2);
	return memo[n];
}

int main()
{
	int n;
	while(scanf("%d",&n)==1 && n)
	{
		printf("%d\n",fib(n));
	}
	return 0;
}
