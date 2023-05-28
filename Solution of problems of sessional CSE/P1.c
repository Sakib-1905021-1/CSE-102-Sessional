#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void odd_integer(int* p,int n)
{
    int k=1,i;
    p = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;++i){
        *(p+i) = k;
        k+=2;
    }
    for(i=0;i<n;++i)
        printf("%d ",*(p+i));
    //free(p);

}
int main()
{
    int n;
    int* odd;
    scanf("%d",&n);
    odd = (int*)malloc(n*sizeof(int));
    odd_integer(*odd,n);
    free(odd);
    return 0;
}

