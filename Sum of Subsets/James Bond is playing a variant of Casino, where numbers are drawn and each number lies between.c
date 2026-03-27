#include <stdio.h>

int main(){
    int T,X,Y,Z;
    scanf("%d",&T);
    while(T--){                     // +1
        scanf("%d%d",&X,&Y);
        Z=21-(X+Y);
        if((Z-1)*(10-Z)>=0)         // +1
            printf("%d\n",Z);
        else                        // +1
            printf("-1\n");
    }
}