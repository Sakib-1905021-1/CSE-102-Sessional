#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
int main()
{
    int a[5][5],b[5][5],c[5][5],sum=0,i,j,k,r1,c1,r2,c2;
    scanf("%d %d",&r1,&c1);
    for(i=0;i<r1;++i){
        for(j=0;j<c1;++j){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d %d",&r2,&c2);
    for(i=0;i<r2;++i){
        for(j=0;j<c2;++j){
            scanf("%d",&b[i][j]);
        }
    }
    if(c1==r2){
        for(i=0;i<r1;++i){
            for(j=0;j<c2;++j){
                for(k=0;k<c1;++k){
                    sum+=a[i][k]*b[k][j];
                }
                c[i][j]=sum;
                sum=0;
            }
        }
        printf("%d %d\n",r1,c2);
        for(i=0;i<r1;++i){
            for(j=0;j<c2;++j){
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("Multiplication is not possible");
    return 0;


}
