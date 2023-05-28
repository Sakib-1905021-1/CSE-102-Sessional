#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s1[101],s2[50],s3[11];
    int i,j,k,nomatch=0,idx,l;
    gets(s1);
    gets(s2);
    gets(s3);
    if (!strcmp(s1,s2)){
        puts(s3);
    }
    else{
        for(i=0;i<strlen(s1);i++){
            if(s1[i]== s2[0]){
                idx=i;
                for(j=1;j<strlen(s2);j++){
                    if(s1[i+j] != s2[j]){
                        nomatch =  1;
                        break;
                    }
                }
                if(!nomatch){
                    l=0;
                    for(k=idx;k<strlen(s3);k++){
                        s1[k] = s3[l++];
                    }
                }

            }
        }
         printf("%s ",s1);
    }

    return 0;

}
