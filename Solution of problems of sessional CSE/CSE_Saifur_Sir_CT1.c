#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<windows.h>
/* mystrlen(char *str)
{
    char *p = str;
    while(*p++)
    return p-str-1;
*/
int main()
{
/*char s[] = "Sakib";
    int len = mystrlen(s);
    printf("%d",len);
    return 0;
    /*int* p,i;
    p= (int*) malloc(10*sizeof(int));
    int *q=p;
    for(i=0;i<10;++i)
        scanf("%d",q++);
    q = p;
    for(i=0;i<10;++i)
        printf("%d ",*p++);
    free(p*/
    int x=3,y=5;
    int*p = &x;
    //y=*p;
    //y++;
    *p = x+y;
    printf("%d\n",*p);
//p = &++y;
     printf("%d",*p);

    return 0;
}
