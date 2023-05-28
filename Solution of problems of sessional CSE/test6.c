#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int x,i,j,l;
    scanf("%d",&x);
    int a[x],counter=x;
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);
    for(i=0;i<(x-1);i++){
        for(j=i+1;j<x;++j){
            if(a[j]==a[i])
                counter--;
        }
    }
    printf("%d",counter);
    int b[counter];
    for(i=0;i<x;i++){
        for(j=0;j<i;j++){
            if(a[j]==a[i]){
                break;
            }
        }
        if(i==j)
            b[i]=a[i];
            //printf("%d ",a[i]);
    }
    //l=sizeof(b)/sizeof(b[0]);
    for(i=0;i<counter;++i)
        printf("%d ",b[i]);
    return 0;
}
