#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
char *mystrstr(char *str1,char *str2)
{
    int l= strlen(str1),m=strlen(str2),p=-1,i,j;
    char *q = NULL;
    for(i=0;i<l;++i){
        //ch = *(str1+i);
        if(*(str1+i) == *(str2+0)){
            for(j=1;j<m;++j){
                if(*(str1+i+j)!=*(str2+j)){
                    break;
                }
                if(j == m){
                    p = i;
                    break;
                }
            }
        }
    }
    if(p == -1)
        return *q;
    else
        for(i=p;*str1;++i)
            printf("%c",*(str1+i));
}
int main()
{
    char *s1,*s2;
    gets(s1);
    gets(s2);
    (*mystrstr)(*s1,*s2);
    return 0;
}
