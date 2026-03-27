#include<iostream>
#include<map>
using namespace std;
int main(){
long long n,x,s=0,maxs=0;cin>>n;
map<long long,long long>m;
for(long long i=0;i<n;i++){
cin>>x;s+=x;
maxs=max(maxs,++m[s]);
}
cout<<n-maxs;
}