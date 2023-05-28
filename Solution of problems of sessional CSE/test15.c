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
void Cofactor(int n,double C[n][n],double temp[n][n],int p,int q)
{
    int i=0,j=0,row,col;
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            if(row!=p && col!=q){
                temp[i][j++]=C[row][col];
                if(j==n-1){
                    j=0;
                    i++;
                }
            }
        }
    }

}
double Determinant(int n,double C[n][n])
{
    double D=0;
    int k;
    if(n==1)
        return C[0][0];
    else{
        double temp[n][n],sign=1;
        for(k=0;k<n;k++){
            Cofactor(n,C,temp,0,k);
            D+=sign*C[0][k]*Determinant(n-1,temp);
            sign=-sign;


        }
        return D;
    }


}
int main()
{
    double A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("%0.2lf ",Determinant(3,A));
    return 0;
}

