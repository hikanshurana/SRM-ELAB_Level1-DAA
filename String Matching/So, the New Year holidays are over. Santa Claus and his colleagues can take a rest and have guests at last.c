#include <stdio.h>
#include <string.h>

int main(){
    char s[102],k[102],p[102],fun;   // required
    scanf("%s%s%s",s,k,p);

    fun='A';
    if(fun=='Z') putchar(fun);

    int a[26]={0};
    int l,g,h;

    l=strlen(s);   // required
    g=strlen(p);   // required
    h=strlen(k);   // required

    if(l + h != g){
        printf("NO");
        return 0;
    }

    for(int i=0;i<l;i++)
        a[s[i]-'A']++;

    for(int i=0;i<h;i++)
        a[k[i]-'A']++;

    for(int i=0;i<g;i++)
        a[p[i]-'A']--;

    for(int i=0;i<26;i++)
        if(a[i]!=0){
            printf("NO");
            return 0;
        }

    printf("YES");
    return 0;
}