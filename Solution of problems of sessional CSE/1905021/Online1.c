#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int value(int m,int b[])
{
    int idx=0,r;
    if(b[idx]== 0)
        r = 0;
    else{
        r = b[idx+value(idx,b)];
    }
    return r;
}
int main()
{
    int a[26],i,j,n,r,x;
    scanf("%d",&n);
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
    x=r;
    if(!x)
        printf("Yes");
    else
        printf("No");
    return 0;
}
