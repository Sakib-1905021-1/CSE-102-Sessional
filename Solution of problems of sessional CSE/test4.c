#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<Windows.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,j,k;
    k=0;
    while(k<4){
        for(i=0;i<x;i++){
            for(j=0;j<(2*x);j++){
                printf("%d",j);
                Sleep(40);
            }
            printf("\n");
            if(j==(2*x)){
                printf("  ");
            }

        }
        printf("\b");
        k++;
    }
    return 0;
}
