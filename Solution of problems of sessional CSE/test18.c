#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int **p,n=2,m=3,i,j;
    p = (int**)malloc(n*sizeof(int));
    for(i=0;i<n;++i){
        p[i] = (int*)malloc(m*sizeof(int));
        for(j=0;j<m;++j)
            *p[i] = j+1;
    }
    for(i=0;i<n;++i){
        for(j=0;j<m;++j){
            printf("%d ",*p[i]);
        }
        printf("\n");
    }
    free(p);
    return 0;
}
