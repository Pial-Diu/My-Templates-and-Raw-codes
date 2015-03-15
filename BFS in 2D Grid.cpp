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

#define PI (2 *  acos(0.0))
#define eps 1e-7

#define MAX 25
void BFS(int,int,int,int);

using namespace std;

char str[MAX][MAX];
int visit[MAX][MAX];
int one[] = {-1,1,0,0};
int two[] = {0,0,-1,1};
int cou = 0;

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t,x,y,r = 0;
    int row,col;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&col,&row);
        for(int i = 0 ; i < row ; i++)
        {
            for(int j = 0 ; j < col ; j++)
            {
                scanf(" %c",&str[i][j]);
                if(str[i][j] == '@')
                {
                    x = i, y = j;
                }
            }
        }
        cou = 0;
        BFS(x,y,row,col);
        printf("Case %d: %d\n",++r,cou + 1);
    }
    return 0;
}

void BFS(int i , int j , int r , int c)
{
    memset(visit,-1,sizeof(visit));
    queue < int > q;
    q.push(i);
    q.push(j);
    while(!q.empty())
    {
        int n = q.front();
        q.pop();
        int m = q.front();
        q.pop();
        for(int k = 0 ; k < 4 ; k++)
        {
            int o = n + one[k];
            int p = m + two[k];
            if((o >= 0 && o < r ) && (p >= 0 && p < c) && (str[o][p] == '.'))
            {
                if(visit[o][p] == -1)
                {
                    visit[o][p] = 0;
                    q.push(o);
                    q.push(p);
                    cou++;
                }
            }
        }
    }
}
