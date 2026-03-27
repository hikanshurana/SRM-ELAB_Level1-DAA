#include <bits/stdc++.h>
using namespace std;

double vol(double l,double b,double x){
    return(l-2*x)*(b-2*x)*x;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;

    while(T--){
        double L,W;
        cin>>L>>W;

        double x=(L+W-sqrt(L*L-L*W+W*W))/6.0;

        cout<<fixed<<setprecision(9)<<vol(L,W,x)<<"\n";
    }
}