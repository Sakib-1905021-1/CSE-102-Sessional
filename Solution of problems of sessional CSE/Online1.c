#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int value(int m,int idx,int b[])
{
    int r;
    idx=0;

    if(b[idx]== 0)
        r = 0;
    else{
        if(idx < m)
            idx = idx+b[idx];
        else if(idx>=m)
            idx = idx - b[idx];

        r = b[idx];
    }
    return r;
}
int main()
{
    int a[26],i,j,n,r,x;
    scanf("%d",&n);
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
    x=value(n,0,a);
    if(!x)
        printf("Yes");
    else
        printf("No");
    return 0;
}
