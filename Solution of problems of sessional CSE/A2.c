#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int res(int n,int m,int p)
{
    int i,exp=1,result;
    for(i=1;i<=m;i++){
        exp*=n;
    }
    result=exp%p;
    return result;
}
int main()
{
    int x,y,z,mod;
    scanf("%d %d %d",&x,&y,&z);
    mod=res(x,y,z);
    printf("%d",mod);
    return 0;
}

