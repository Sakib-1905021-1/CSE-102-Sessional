#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int n,t,i,j,temp;
    float median;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
        scanf("%d",&a[i]);
    for(i=0;i<t-1;i++){
        for(j=i+1;j<t;j++){
            if(a[j]<a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    if(t%2!=0)
        median=a[(t+1)/2-1];
    else
        median=(a[(t/2)-1]+a[(t/2)])/2.0;
    printf("%lf",median);
    return 0;

}
