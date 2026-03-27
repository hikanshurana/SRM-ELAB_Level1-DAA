#include <stdio.h>

int main(){
    int b[111]={0},g[111]={0},n,i,r,j;

    scanf("%d",&n);for(i=0;i<n;i++){scanf("%d",&j);b[j]++;}

    scanf("%d",&n);for(i=0;i<n;i++){scanf("%d",&j);g[j]++;}

    for(i=1;i<=100;i++){
        while(b[i]&&g[i]){r++;b[i]--;g[i]--;}
        while(b[i]&&g[i+1]){r++;b[i]--;g[i+1]--;}
        while(b[i+1]&&g[i]){r++;b[i+1]--;g[i]--;}
    }

    printf("%d",r+1);
    return 0;
}