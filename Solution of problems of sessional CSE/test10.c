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
        //b[0]=temp;
    }
    b[0]=temp;

}
int main()
{
    int a[]={1,2,3,4},i;
    reverse(4,a);
    for(i=0;i< 4;++i)
        printf("%d ",a[i]);
    return 0;
}
