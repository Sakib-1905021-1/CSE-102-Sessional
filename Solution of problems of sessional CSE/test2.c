#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void most_frequent(int n,int a[])
{
    int i,j,max,counter;
    counter=n;
    //number of distinct elements
    for(i=0;i<(n-1);++i){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j])
                counter--;
        }
    }
    int b[counter],c[counter],count=0;
    //array of distinct elements
    for(i=0;i<n;i++){
        for(j=0;j<i;j++){
            if(a[j]==a[i]){
                break;
            }
        }
        if(i==j)
            b[i]=a[i];
    }
    //number of repeat of a number
    for(i=0;i<counter;i++){
        count=0;
        for(j=0;j<n;j++){
            if(b[i]==a[j])
                count++;
        }
        c[i]=count;
    }
    //finding the maximum number it was repeated
    max=c[0];
    for(i=0;i<counter;i++){
        if(max<c[i]){
            max=c[i];
        }
    }
    //print most frequent numbers
    for(i=0;i<counter;i++){
        if(c[i]==max)
            printf("%d ",b[i]);
    }
}
int main()
{
    int x,i;
    scanf("%d",&x);
    int a[x];
    //int k=1;
    for(i=0;i<x;i++){
        scanf("%d",&a[i]);
        if(i==0)
            printf("Most frequent number=%d\n",a[i]);
        else{
            printf("Most frequent number=");
            most_frequent(i+1,a);
            printf("\n");
        }
        //k++;
    }
    return 0;

}
