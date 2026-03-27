#include <stdio.h>

int main(){
    char s[105];
    int a[96]={0};
    scanf("%s",s);

    for(int i=0;s[i];i++)
        a[s[i]-32]=1;

    int n,i;
    for(n=i=0;i<96;i++)   // required
        n+=a[i];         // required

    printf(n%2==0? "CHAT WITH HER!" : "IGNORE HIM!"); // required
    return 0;
}