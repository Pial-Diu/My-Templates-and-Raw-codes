#include<stdio.h>                          //  LCM  //
#include<math.h>

long long gcd(int x,int y)
{
    if(y==0) return x;
    return gcd(y,x%y);
}

int main()
{
    int a,b;
    long long lcm;
    while(scanf("%d %d",&a,&b)==2 )
    {
        lcm=(a/gcd(a,b))*b;                   //LCM(x,y)=(x*y)/GCD(x,y)....
        printf("%lld\n",lcm);
    }
    return 0;
}
