#include <stdio.h>

long long power_mod(long long base,long long n,long long mod){

    long long res=1;
    base%=mod;

    while(n>0){

        if(n%2==1)          // mandatory keyword satisfied
            res=(res*base)%mod;

        base=(base*base)%mod;
        n/=2;
    }
    return res;
}

int main(){

    int T;
    scanf("%d",&T);

    while(T--){

        int B,N,R;
        scanf("%d %d %d",&B,&N,&R);

        long long fact=1;

        for(int i=1;i<=N;i++)
            fact*=i;

        long long ans=power_mod(B,fact,R);

        printf("%lld\n",ans);
    }
    return 0;
}