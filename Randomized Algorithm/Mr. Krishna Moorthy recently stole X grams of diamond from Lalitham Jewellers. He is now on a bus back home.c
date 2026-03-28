#include <stdio.h>

#define MAXX 4005
long long dp[MAXX];

int main(){

    long long N,X;
    scanf("%lld %lld",&N,&X);

    long long i,w,v,a;

    for(i=0;i<=X;i++)
        dp[i]=-1;

    dp[0]=0;

    while(N--){
        scanf("%lld %lld",&v,&a);

        for(w=X;w>=1;w--){
            long long cand=-1;

            if(w>=a){
                long long ok=(dp[w-a]!=-1);
                cand = ok*(dp[w-a]+v) + (1-ok)*(-1);
            }

            if(cand>dp[w]) dp[w]=cand;
        }
    }

    if(dp[X]<0)
        printf("Got caught!");
    else
        printf("%lld",dp[X]);

    return 0;
}