#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,a,c=0,num=0,p,b,i,m,count=0;
    scanf("%d",&n);
    m=n;
    while(m>0){
        a=m%10;
        c++;
        m/=10;
    }
    while(n>0){
        b=n%10;
        p=1;
        for(i=1;i<=(c-1);i++){
            p*=10;
        }
        num+=(b*p);
        c--;
        n/=10;
    }
    for(i=1;i<=num;i++){
        if(num%i==0)
            count++;
    }
    if(count==2)
        printf("Yes");
    else
        printf("No");
    return 0;
}
