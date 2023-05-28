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
void Transpose(int r3,int c3,double C[][c3],double T[][c3])
{
    int i,j;


    for(i=0;i<r3;++i){
        for(j=0;j<c3;++j){
            T[j][i]=C[i][j];
        }
    }
    printme(r3,c3,T);
}
int main()
{
    double A[3][3]={{1,2,3},{4,5,6},{7,8,9}};double T1[3][3];
    Transpose(3,3,A,T1);
    return 0;
}

