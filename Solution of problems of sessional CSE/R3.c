#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>
void remove_vowel(int n,char s[])
{
    int i,j;char ch;
    for(i=0;i<n;i++){
        ch=s[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='O'||ch=='U'||ch=='I'){
            for(j=i;j<n;++j){
                s[j]=s[j+1];
            }
            n--;
            i--;
        }

    }
}
int main()
{
    char s[100];
    int l;
    gets(s);
    l=strlen(s);
    remove_vowel(l,s);
    puts(s);
    return 0;

}
