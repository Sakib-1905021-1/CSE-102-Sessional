#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
char *construct(char *s,char *t)
{
    char *newc;
    int i,j;
    for(i=0;i<strlen(s);++i){
        for(j=0;j<strlen(t);++j){
            if(*(s+i) != *(t+j)){
                *(newc+i) = *(s+i);
            }
        }
    }
    return newc;
}
int main()
{
    char s[100],t[100];
    char *cons;
    gets(s);
    gets(t);
    cons = malloc(strlen(s)*sizeof(char));
    cons = construct(s,t);
    puts(cons);
    free(cons);
    return 0;
}

