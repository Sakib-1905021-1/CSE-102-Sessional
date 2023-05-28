#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int x,i,j,k,max,v;
    scanf("%d",&x);
    int a[x];
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<x;i++){
        if(max<a[i])
            max=a[i];
    }
    for(k=0;k<x;k++){
        v=max-a[k];
        for(i=0;i<max;i++){
            for(j=0;j<2;j++){
                if(i>(v-1))
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}
