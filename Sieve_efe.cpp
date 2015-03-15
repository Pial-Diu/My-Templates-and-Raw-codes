#include<stdio.h>
#include<math.h>
#define max 10000000

int ar[max];

void sieve()
{
	ar[0]=ar[1]=1;
	for(int i=2;i<=sqrt(max);i++)
		for(int j=i*i;j<=max;j+=i)
			if(ar[j]==0)
				ar[j]=1;
}

int main()
{
	int x;
	sieve();
	while(scanf("%d",&x)==1)
	{
		if(ar[x]==0)
		{
			printf("PRIME\n");
		}
		else
		{
			printf("NOT\n");
		}
	}


}
