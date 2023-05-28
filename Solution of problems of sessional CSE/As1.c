#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void most_frequent(int n,int a[])
{
    int i,j,max,counter,b[20000],c[20000],count=0,idx=1,found=0;
    counter=n;
    //number of distinct elements
    for(i=0;i<(n-1);++i){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                counter--;
                break;
            }
        }
    }
    b[0]=a[0];
    //array of distinct elements
    for(i=0;i<n;i++){
        found=0;
        for(j=0;j<idx;j++){
            if(b[j]==a[i]){
                found=1;
                break;
            }
        }
        if(found==0){
            b[idx]=a[i];
            idx++;
        }
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
        if(c[i]==max){
            printf("%d",b[i]);
            if(i!=(counter-1))
                printf(",");
        }
    }
}
int main()
{
    int x,i,k,a[20000];
    scanf("%d",&x);
    for(i=0,k=1;i<x;i++,k++){
        scanf("%d",&a[i]);
        if(i==0)
            printf("Most frequent number=%d\n",a[i]);
        else{
            printf("Most frequent number=");
            most_frequent(i+1,a);
            printf("\n");
        }
    }
    return 0;

}


