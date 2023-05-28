#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char ch1,ch='a';
    for(i=1;i<=n;++i){
        for(j=1;j<=(n-i);j+=2)
         printf(" ");
        for(j=1;j<=i;j+=2){
            printf("%c",ch);
            ch++;
        }

        printf("\n");
    }
    return 0;
}
