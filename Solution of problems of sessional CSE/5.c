#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i*i<=n;i++){
        if(n%i==0)
            printf("%d*%d\n",i,n/i);
    }
    return 0;
}
