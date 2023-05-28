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
void divide(int r3,int c3,double C[][c3],double div[][c3],int n)
{
    int i,j;
    for(i=0;i<r3;++i){
        for(j=0;j<c3;++j){
            div[i][j] = C[i][j]/n;
        }
    }
    printme(r3,c3,div);
}
int main()
{
    double A[3][3]={{1,2,3},{4,5,6},{7,8,9}};double R[3][3];
    divide(3,3,A,R,2);
    return 0;
}


