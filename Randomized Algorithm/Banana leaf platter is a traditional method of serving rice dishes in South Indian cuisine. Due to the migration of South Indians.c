#include<stdio.h>

int max(int a,int b){ return a>b?a:b; }

int main(){
    int T; 
    scanf("%d",&T);
    while(T--){
        int n,k,p;
        scanf("%d%d%d",&n,&k,&p);

        int dp[1501]={0};

        for(int i = 0;i < n;i++){
            int a[31],pre[31]={0};

            for(int j=1;j<=k;j++){
                scanf("%d",&a[j]);
                pre[j]=pre[j-1]+a[j];
            }

            for(int j=p;j>=0;j--){
                for(int x=1;x<=k && x<=j;x++){
                    dp[j]=max(dp[j],dp[j-x]+pre[x]);
                }
            }
        }

        printf("%d\n",dp[p]);
    }
    return 0;
}