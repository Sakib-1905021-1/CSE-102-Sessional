#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s1[101]="The man is good man",s2[5]="man",s3[11]="cool";
    int i,idx,j,k,l,cnt=0;
    for(i=0;i<strlen(s1);++i){
        if(s1[i] == s2[0]){
            idx=i;
            cnt++;
            for(j=1;j<strlen(s2);j++){
                if(s1[i+j] != s2[j])
                    break;

                else if(j == strlen(s2)){
                    l=0;
                    for(k=idx; k<strlen(s3);k++){
                        s1[k] = s3[l++];

                    if(k==strlen(s3))
                        break;
                    }
            }
            }
        }
    }
    printf("%d %d",idx,cnt);
    //strcpy(s1,s2);
    //puts(s1);
    printf("%s ",s1);
    return 0;
}
