#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
char *construct(char *s,char *t)
{
    char *newc = NULL;
    int i,j,k=0,len1 = strlen(s),len2 = strlen(t),newl=0;
    for(i=0;i<strlen(s);++i){
        for(j=0;j<strlen(t);++j){
            if(*(s+i) == *(t+j)){
                newl++;
                //*(newc+i) = *(s+i);
            }
        }
    }
    newc = (char*)malloc(newl*sizeof(char));
    for(i=0;i<strlen(s);++i){
        for(j=0;j<strlen(t);++j){
            if(*(s+i) != *(t+j)){
                *(newc+k) = *(s+i);
                k++;
                //*(newc+i) = *(s+i);
            }
        }
    }
    //*s = '\0';
    *newc= '\0';
    return newc;
    free(newc);
}
int main()
{
    char s[100],t[100];
    char *cons;
    gets(s);
    gets(t);
    //cons = malloc(strlen(s)*sizeof(char));
    cons = construct(s,t);
    puts(cons);
    //free(cons);
    return 0;
}

