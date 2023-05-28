#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
int is_prime(int x);
int comb(int m,int r);
int main()
{
    int n,p,k,a[100],sum=0,check,i,term;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        check=is_prime(i);
        if(check==1)
            a[i-1]=i;
    }
    for(i=0;i<=n;i++){
        term=(comb(a[i+1],a[i]));
        sum+=term;
    }
    printf("%d",sum);
    return 0;
}
int comb(int m,int r)
{
    int i,mult=1,fact=1,combi,j;
    float l;
    for(i=r;i>=1;i--){
        fact*=i;
    }

    for(i=m,j=1;j<=r;i--,j++){
        mult*=i;
    }

    l=mult/fact;
    combi=(int)l;
    return combi;
}
int is_prime(int x)
{
    int i;
    if(x<2)
        return 0;
    else if(x==2)
        return 1;
    else if(x%2==0)
        return 0;
    else{
        for(i=3;i*i<=x;i+=2){
            if(x%i==0)
                return 0;
        }
        return 1;
    }
}

