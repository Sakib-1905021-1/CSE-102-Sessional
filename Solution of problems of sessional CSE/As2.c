#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int perfect(int n)
{
    int i,s=0;
    for(i=1;i<n;i++){
        if(n%i==0)
            s+=i;
    }
    if(s==n)
        return 1;
    else
        return 0;
}
int main()
{
    int x,k,m,sum=0;
    scanf("%d",&x);
    for(k=1;k<=x;k++){
        m=perfect(k);
        if(m==1)
            sum+=k;
    }
    printf("%d",sum);
    return 0;
}
