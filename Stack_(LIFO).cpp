#include <stack>                   //STACK_(LIFO)//
#include<stdio.h>

using namespace std;

int main()
{
    stack<int> prime;
    prime.push(-6);
    prime.push(60);
    prime.push(61);
    prime.push(62);
    prime.pop();
    prime.pop();
    printf("%d",prime.top());
	return 0;
}
