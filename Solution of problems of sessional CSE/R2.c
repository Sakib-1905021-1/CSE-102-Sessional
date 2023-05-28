#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
void reverse(int s,int b[])
{
    int k,temp;
    temp=b[s-1];
    for(k=(s-1);k>0;k--){
        b[k]=b[k-1];

    }
    b[0]=temp;

}
int main()
{
    int n,a[5][5],temp,i,j,rev[5];
    scanf("%d",&n);
    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            rev[j]=a[i][j];
        }
        reverse(n,rev);
    }
    for(i=0;i<n;++i){
        for(j=0;j<n;++j){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;

}
