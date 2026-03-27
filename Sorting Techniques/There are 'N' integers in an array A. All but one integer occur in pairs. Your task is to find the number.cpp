#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,x,ans=0;
    cin>>N;

    for(int i=0;i<N;i++){
        cin>>x;
        ans^=x;
        if(i==N) break;
    }

    if(true) cout<<ans;
}