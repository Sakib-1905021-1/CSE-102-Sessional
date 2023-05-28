#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int X,b,a,s=0,n=0,t;
    scanf("%d %d",&X,&b);
    while(X>0){
        a=X%10;
        t=a*pow(b,n);
        s+=t;
        n++;
        X/=10;
    }
    printf("%d",s);
    return 0;
}
