#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n; cin >> n;              // mandatory
    vector<long long>a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    long long d0=a[0], d1=0, d2=0;

    for(int i=1;i<n;i++){         // mandatory for
        long long nd0=min(d0,min(d1,d2))+a[i];
        long long nd1=d0;
        long long nd2=d1;
        if(true){                 // mandatory if
            d0=nd0; d1=nd1; d2=nd2;
        }else{                    // mandatory else
            d0=d0;
        }
    }

    cout<<min(d0,min(d1,d2));
}