#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
double median(int size,int a[])
{
    int b[size],i,j,t;
    double med;
    for(i=0;i<size;i++)
        b[i]=a[i];
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(b[j]<b[i]){
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
        }
    }
    if(size%2!=0)
        med=b[(size+1)/2-1];
    else
        med=(b[(size/2)-1]+b[(size/2)])/2.0;
    return med;
}
int main()
{
    int s,i;
    scanf("%d",&s);
    int a[s];
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
    double medi=median(s,a);
    printf("%lf",medi);
    return 0;
}

