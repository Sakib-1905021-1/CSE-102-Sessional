#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
long long int factorial(long long int n)
{
    long long int i,s=1;
    for(i=n;i>=1;i--)
        s*=i;
    return s;
}
int main()
{
    long long int x,i,fact,sum=0;
    scanf("%lld",&x);
    for(i=1;i<=x;i++){
        if(i%2!=0){
            fact=factorial(i);
            sum+=fact;
        }
    }
    printf("%d",sum);
    return 0;
}

