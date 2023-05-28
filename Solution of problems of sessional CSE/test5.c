#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
void pattern(int n)
{
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<2;j++){
            printf("*");
        }
        if(i==n&&j==2){
            printf("  ");
            printf("\b");
        }
        else
            printf("\n");
    }
}
int main()
{
    int x,i;
    scanf("%d",&x);
    int a[x];
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);
    for(i=0;i<x;i++){
        pattern(a[i]);
        printf("\r|");
    }
    return 0;
}
