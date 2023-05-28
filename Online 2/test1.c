#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
int comb(int m,int r)
{
    int i,mult=1,fact=1,combi,j,k;
    //float l;
    k=m-r;
    for(i=k;i>=1;i--){
        fact*=i;
    }

    for(i=m,j=1;j<=k;i--,j++){
        mult*=i;
    }

    combi=mult/fact;
    //combi=(int)l;
    return combi;
}
int main()
{
    int m,n,p;
    scanf("%d %d",&m,&n);
    p=comb(m,n);
    printf("%d ",p);
    return 0;

}

