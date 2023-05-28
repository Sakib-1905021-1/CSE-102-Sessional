#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
int main()
{
    int x,i,j,k,t,max;
    scanf("%d",&x);
    int a[x];
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);
    max=a[0];
    for(i=1;i<x;i++){
        if(max<a[i])
            max=a[i];
    }
    for(i=1;i<=max;i++){
        k=0;
        for(j=1;j<=(3*x-1);j++){
            t=max-a[k];
            if(j%3==0){
                printf(" ");
                k++;
            }
            else if(i<=t)
                printf(" ");
            else
                printf("*");

        }
        printf("\n");
    }
    return 0;


}

