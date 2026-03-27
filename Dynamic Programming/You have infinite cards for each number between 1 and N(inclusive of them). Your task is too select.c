#include <stdio.h>

int main(){
long long t,n;
scanf("%lld",&t);
while(t--){
scanf("%lld",&n);
long long ans;
if(n==1) ans=1;
else if(n==2) ans=4;
else if(n==3) ans=10;
else ans=9*n-18;
printf("%lld\n",ans);
}
return 0;
}