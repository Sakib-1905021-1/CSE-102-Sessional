#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int is_factor(int n,int g);
int is_prime(int n);
int num_factor(int n,int g);
int main()
{
    int x,l=0,i,y;
    scanf("%d",&x);
    for(i=1;i*i<=x;i++){
       if((is_factor(x,i))&&is_prime(i)){
          printf("%d^%d * ",i,num_factor(x,i));
          }
    }
    while(y!=-1){
        scanf("%d",&y);
        if(is_prime(y))
            printf("%d",num_factor(x,y));
        else
            printf("%d",l);
    }
    return 0;
}

int is_factor(int n,int g)
{
    return (n%g==0);
}
int is_prime(int n)
{
    int i;
    if(n<2)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(i=3;i*i<=n;i+=2){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int num_factor(int n,int g)
{
    int count=0;
    do{
        count++;
        n=n/g;
    }while(n%g==0);
    return count;
}
/*int num_factorial(int n)
{
    int m;
    m=is_factorial(n);

}*/

