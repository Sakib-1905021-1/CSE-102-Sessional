#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
int is_prime(int x);
long long comb(int m,int r);
int main()
{
    int n,prime,i,idx,last,a[25];
    long long sum;
    scanf("%d",&n);
    last=n+1;
    idx=0;
    for(i=1;i<=25;i++){
        prime=is_prime(i);
        if(prime==1)
            a[idx++]=i;
        if(idx==last)
            break;
    }
    for(i=0;i<(last-1);i++){
        sum+=comb(a[i+1],a[i]);
    }
    /*prime=is_prime(n);
    combin=comb(n,2);
    sum=prime+combin;*/
    printf("%d",sum);
}
long long comb(int m,int r)
{
    int i,j;
    long long mult=1,fact=1,combi;
    //float l;
    for(i=m-r;i>=1;i--){
        fact*=i;
    }

    for(i=m,j=1;j<=(m-r);i--,j++){
        mult*=i;
    }

    combi=mult/fact;
    //combi=(int)l;
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

