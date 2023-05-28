#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%3==0&&n%7==0)
        printf("TS");
    else if(n%3==0&&n%7!=0)
        printf("T");
    else if(n%7==0&&n%3!=0)
        printf("S");
    else
        printf("None");
    return 0;
}
