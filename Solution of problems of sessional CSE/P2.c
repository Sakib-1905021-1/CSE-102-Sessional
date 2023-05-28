#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int **arr,r,c,num,i,j,is_found = 0,l=-1;
    scanf("%d %d",&r,&c);
    arr = (int**)malloc(r*sizeof(int*));
    for(i=0;i<r;++i){
        arr[i] = (int*)malloc(c*sizeof(int));
        for(j=0;j<c;++j)
            scanf("%d",&arr[i][j]);
    }
    scanf("%d",&num);
    for(i=0;i<r;++i){
        for(j=0;j<c;++j){
            if( num == arr[i][j]){
                printf("%d %d\n",(i+1),(j+1));
                is_found=1;
            }
        }
    }
    if(!is_found)
        printf("%d",l);
    free(arr);
    return 0;

}
