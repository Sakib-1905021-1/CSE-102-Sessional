#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define Row 5
#define Col 5
double A [Row][Col],B[Row][Col];
int r1,r2,c1,c2;
void printme(int m,int n,double X[][n]);
void add(int r3,int c3,int r4,int c4,double C[][c3],double D[][c4],double sum[][c3]);
void subtract(int r3,int c3,int r4,int c4,double C[][c3],double D[][c4],double sub[][c3]);
void multiply(int r3,int c3,int r4,int c4,double C[][c3],double D[][c4],double mult[][c3]);
void divide(int r3,int c3,double C[][c3],double div[][c3],int n);
void Transpose(int r3,int c3,double C[][c3],double T[][c3]);
void Cofactor(int n,double C[n][n],double temp[n][n],int p,int q);
double Determinant(int n,double C[n][n]);
int main()
{
    char command[10];
    //double A[5][5],B[5][5];
    int foundA=0,foundB=0,r1,r2,c1,c2,i,j,n,n1,n2;
    while(1){
        gets(command);
        if(!strcmp(command,"In A")){
            foundA=1;
            scanf("%d %d",&r1,&c1);
            //double A[r1][c1];
            for(i=0;i<r1;++i){
                for(j=0;j<c1;++j){
                    scanf("%lf",&A[i][j]);
                }
            }
        }
        if(!strcmp(command,"In B")){
            foundB=1;
            scanf("%d %d",&r2,&c2);
            //double B[r2][c2];
            for(i=0;i<r2;++i){
                for(j=0;j<c2;++j){
                    scanf("%lf",&B[i][j]);
                }
            }
        }
        if(!strcmp(command,"Out A")){
            //double A[r1][c1];
            if(foundA==1){
                printme(r1,c1,A);
            }
            else if(!foundA)
            printf("Not A matrix found\n");
        }
        if(!strcmp(command,"Out B")){
            //double B[r2][c2];
            if(foundB){
                printme(r2,c2,B);
            }
            else if(!foundB)
                printf("Not B matrix found\n");
        }
        if(!strcmp(command,"A+B")){
            //double A[r1][c1],B[r2][c2];
            double C[r1][c1];
            if(r1==r2 && c1==c2 && foundA==1 && foundB==1){
                add(r1,c1,r2,c2,A,B,C);
            }
            else
                printf("Addition not possible\n");
        }

        if(!strcmp(command,"B+A")){
            //double A[r1][c1],B[r2][c2];
            double C[r2][c2];
            if(r1==r2 && c1==c2 && foundA==1 && foundB==1){
                add(r1,c1,r2,c2,A,B,C);
            }
            else
                printf("Addition not possible\n");
        }
        if(!strcmp(command,"A-B")){
            //double A[r1][c1],B[r2][c2];
            double S[r1][c1];
            if(r1==r2 && c1==c2 && foundA==1 && foundB==1){
                subtract(r1,c1,r2,c2,A,B,S);
            }
            else
                printf("Subtraction not possible\n");
        }
        if(!strcmp(command,"B-A")){
            //double A[r1][c1],B[r2][c2];
            double S1[r2][c2];
            if(r1==r2 && c1==c2 && foundA==1 && foundB==1){
                subtract(r2,c2,r1,c1,B,A,S1);
            }
            else
                printf("Subtraction not possible\n");
        }
        if(!strcmp(command,"A*B")){
            //double A[r1][c1],B[r2][c2];
            double multi[r1][c2];
            if(r2==c1 && foundA==1 && foundB==1){
                multiply(r1,c1,r2,c2,A,B,multi);
            }
            else
                printf("Multiplication not possible\n");
        }
        if(!strcmp(command,"A/n")){
            //double A[r1][c1],B[r2][c2];
            scanf("%d",&n);
            double R[r1][c1];
            if(foundA){
                divide(r1,c1,A,R,n);
            }
            else
                printf("Division not possible\n");
        }
        if(!strcmp(command,"B/n")){
            //double A[r1][c1],B[r2][c2];
            double R1[r2][c2];
            scanf("%d",&n);
            if(foundB){
                divide(r2,c2,B,R1,n);
            }
            else {
                printf("Division not possible\n");

            }
        }
        if(!strcmp(command,"Det A")){
            //double A[r1][c1],B[r2][c2];
            if(r1==c1 && foundA==1){
                n1=r1;
                printf("%.2lf\n", Determinant(n1,A));
            }
            else
                printf("Can not be determined\n");
        }
        if(!strcmp(command,"Det B")){
            //double A[r1][c1],B[r2][c2];
            if(r2==c2 && foundB==1){
                n2=r2;
                printf("%.2lf\n",Determinant(n2,B));
            }
            else
                printf("Det B is not possible\n");
        }
        if(!strcmp(command,"Trans A")){
            //double A[r1][c1],B[r2][c2];
            double T1[r1][c1];
            if(foundA){
                Transpose(r1,c1,A,T1);
            }
            else
                printf("Trans A not possible\n");
        }
        if(!strcmp(command,"Trans B")){
            //double A[r1][c1],B[r2][c2];
            double T2[r2][c2];
            if(foundB){
                Transpose(r2,c2,B,T2);
            }
            else
                printf("Transpose not possible\n");
        }
        if(!strcmp(command,"exit"))
            break;

    }
    return 0;
}
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
void add(int r3,int c3,int r4,int c4,double C[][c3],double D[][c4],double sum[][c3])
{
    int i,j;
    for(i=0;i<r3;++i){
        for(j=0;j<c3;++j){
            sum[i][j] = C[i][j]+D[i][j];
        }
    }
    printme(r3,c3,sum);

}
void subtract(int r3,int c3,int r4,int c4,double C[][c3],double D[][c4],double sub[][c3])
{
    int i,j;
    for(i=0;i<r3;++i){
        for(j=0;j<c3;++j){
            sub[i][j] = C[i][j]-D[i][j];
        }
    }
    printme(r3,c3,sub);
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

