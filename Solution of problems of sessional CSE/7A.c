#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
int main()
{
    double s,x;
    int n,i;
    s=x;
    scanf("%d %lf",&n,&x);
    for(i=2;i<=n;i++){
        if(i%2!=0)
            s+=(s*x)/(i*1.0);
        else
            s+=(-s*x)/(i*1.0);
    }
    printf("%lf",s);
    return 0;
}
