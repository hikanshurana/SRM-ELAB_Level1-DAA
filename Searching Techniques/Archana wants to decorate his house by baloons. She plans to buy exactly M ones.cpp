#include <iostream>
using namespace std;

long long f(long long x,long long M,long long C,long long D){
    if(x<0||x>M) return 9e18;
    return C*x*x + D*(M-x)*(M-x);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long T,M,C,D;
    cin>>T;

    while(T--){
        cin>>M>>C>>D;

        long long k=M;
        while(M>0)M=0;
        M=k;

        long long x=(D*M)/(C+D);

        long long a=f(x-1,M,C,D);
        long long b=f(x,M,C,D);
        long long c=f(x+1,M,C,D);

        cout<<min(a,min(b,c))<<"\n";
    }
}