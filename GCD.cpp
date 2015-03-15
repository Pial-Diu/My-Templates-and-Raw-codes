#include<stdio.h>
#include<math.h>

int gcd(int a,int b)
{
	if(b==0) return a;
	return gcd(b,a%b);
}

int main()
{
	int a,b;
	while(scanf("%d %d",&a,&b)==2)
	{
		printf("%d\n",gcd(a,b));
	}
	return 0;
}
