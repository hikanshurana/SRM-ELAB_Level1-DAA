#include<stdio.h>

double dp[1005][1005];

int max(int a,int b){return a>b?a:b;}

int main(){
int t; scanf("%d",&t);

while(t--){
int X,Y,N,W,P1,P2;
scanf("%d%d%d%d%d%d",&X,&Y,&N,&W,&P1,&P2);

double p1=P1/100.0, p2=P2/100.0;

for(int s=0;s<=W;s++)
dp[N][s]=(s>=W)?1.0:0.0;

for(int i=N-1;i>=0;i--){
for(int s=0;s<=W;s++){

double a1 = p1*dp[i+1][ (s+X>W?W:s+X) ] + (1-p1)*dp[i+1][s];
double a2 = p2*dp[i+1][ (s+Y>W?W:s+Y) ] + (1-p2)*dp[i+1][s];

dp[i][s] = a1>a2 ? a1:a2;
}
}

printf("%.6f\n",dp[0][0]*100.0);
}
}