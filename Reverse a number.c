#include <stdio.h>
int main()
{
    long long int n, revers=0;
    printf("Enter the number u want to revers:");
    scanf("%lld",&n);
    while(n !=0)
    {
    	revers=revers*10;
    	revers=revers+n%10;
    	n=n/10;
    }
    printf("The revers is=%lld",revers);
    getch();
}

