/// "All the praises be to Allah, the Lord of the 'Alamin (worlds i.e. mankind, jinns and all that exists)"///

/*
Author      : Md. Mahady Hasan (Pial) << UVA: Pial_Diu , Light-oj: 12688 , Codeforces:Pial >>
E-mail      : pial.coder@gmail.com
Created on  :
*/
#include <set>
#include <map>
#include <list>
#include <stack>
#include <deque>
#include <queue>
#include <cmath>
#include <ctime>
#include <cctype>
#include <cstdio>
#include <string>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

#define MAX          1000000
#define pf           printf
#define sf           scanf
#define ms(a,b)      memset(a,b,sizeof(a))
#define CLR(a)       memset(a,0,sizeof(a))
#define SET(a)       memset(a,-1,sizeof(a))
#define rep(i,n)     for(int i = 0; i < (n); i++)
#define fop          freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define TCASE        int T;scanf("%d",&T);while(T--)

typedef long long ll;
typedef unsigned long long ull;
const double PI = 2.0 * acos(0.0);
const double eps = 1e-11;
template < class T > T Abs(T x) { return x > 0 ? x : -x;}
template < class T > T power(T N , T P) { return (P == 0) ?  1 : N * power(N , P - 1); }
template < class T > void max(T &a, T b) { if(a < b) a = b; }
template < class T > void min(T &a, T b) { if(b < a) a = b; }

//int x[] = {1,0,-1,0}; //4 Direction
//int y[] = {0,1,0,-1}; //4 Direction
//int x[] = {-1,-1,-1,0,0,1,1,1};//8 direction
//int y[] = {-1,0,1,-1,1,-1,0,1};//8 direction
//int y[] = {2,1,-1,-2,-2,-1,1,2}; //Knight Direction
//int x[] = {1,2,2,1,-1,-2,-2,-1};//Knight Direction

//bool sive[MAX];
//int prime[MAX];

//ll big_mod(ll n , ll  p , ll m)
//{
//	ll sum;
//	if(!p) return 1;
//	if(p % 2 == 0) { sum = big_mod(n  , p / 2 , m); return ((sum % m ) *(sum % m)) % m; }
//	else return (( n % m) * (big_mod( n , p - 1 , m) % m ))% m;
//}

//void is_prime()
//{
//    int k = 0;
//    int n = sqrt(MAX);
//    prime[k++] = 2;
//    for(int i = 3 ; i <= n ; i = i + 2) if(!sive[i]) for(int j = i * i ; j < MAX ; j = j + (2 * i)) sive[j] = true;
//    for(int i = 3 ; i < MAX ; i = i + 2) if(!sive[i]) prime[k++] = i;
//}

//bool decending(const int a, const int b){
//    return(a > b);
//}

/// "All the praises be to Allah, the Lord of the 'Alamin (worlds i.e. mankind, jinns and all that exists)"///

ull catalan(ull n)
{
    ull res=n+1,ct=2;
    for(ull i=n+2;i<=2*n;i++)
    {
        res*=i;
        res/=ct;
        ct++;
    }
    res/=ct;
    return res;
}

int main()
{
    ull n;
    while(sf("%llu",&n)==1)
    {
        pf("%llu\n\n",catalan(n));
    }
    return 0;
}
