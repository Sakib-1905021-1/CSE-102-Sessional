
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int x,i,j;
    scanf("%d",&x);
    int a[x],counter=x;
    for(i=0;i<x;i++)
        scanf("%d",&a[i]);
    for(i=0;i<(x-1);i++){
        for(j=i+1;j<x;++j){
            if(a[j]==a[i]){
                counter--;
                break;
            }
        }
    }
    printf("%d\n",counter);
    int b[counter],idx=1,found=0;
    b[0]=a[0];
    for(i=1;i<x;i++){
        found=0;
        for(j=0;j<idx;j++){
            if(a[i]==b[j]){
                found=1;
                break;
            }
        }
        if(found==0){
            b[idx]=a[i];
            idx++;
        }

    }
    for(i=0;i<counter;++i)
        printf("%d ",b[i]);
    return 0;
}

