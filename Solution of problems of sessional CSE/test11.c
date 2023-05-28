#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void add(int r3,int c3,int r4,int c4,double C[][c3],double D[][c4],double sum[][c3])
{
    int i,j;
    for(i=0;i<r3;++i){
        for(j=0;j<c3;++j){
            sum[i][j] = C[i][j]+D[i][j];

        }
    }
    for(i=0;i<r3;++i){
        for(j=0;j<c3;++j){
            printf("%.2lf ",sum[i][j]);
        }
        printf("\n");
    }

}
int main()
{
    //double A[5][5],B[5][5];
    int r1,r2,c1,c2,i,j;
    //double C[r1][c1],A[r1][c1],B[r1][c1];
    scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
    double C[r1][c1],A[r1][c1],B[r1][c1];
    for(i=0;i<r1;++i){
        for(j=0;j<c1;++j){
            scanf("%lf",&A[i][j]);
            }
        }
    for(i=0;i<r2;++i){
        for(j=0;j<c2;++j){
            scanf("%lf",&B[i][j]);
            }
        }

    add(r1,c1,r2,c2,A,B,C);
    return 0;
}
