#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
int main()
{
    double x,s,t,f;
    int n,i;
    scanf("%d %lf",&n,&x);
    s=x;
    f=x;
    for(i=1;i<n;i++){
        t=-x*f*i/(i+1.0);
        s+=t;
        f=t;
    }
    printf("%lf",s);
    return 0;
}
