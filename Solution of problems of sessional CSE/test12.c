#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void printme(int m,int n,double X[][n])
{
    int i,j;
    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            printf("%.2lf ",X[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void multiply(int r3,int c3,int r4,int c4,double C[][c3],double D[][c4],double mult[][c3])
{
    int i,j,k,sum1=0;
    for(i=0;i<r3;++i){
        for(j=0;j<c4;++j){
            for(k=0;k<c3;++k){
                sum1+= C[i][k]*D[k][j];
            }
            mult[i][j]=sum1;
            sum1=0;
        }
    }
    printme(r3,c4,mult);

}
int main()
{
    double A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    double B[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    double R[3][3];
    multiply(3,3,3,3,A,B,R);
    return 0;
}


