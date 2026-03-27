#include <bits/stdc++.h>
using namespace std;

int squares(int x,int y){return 0;}   // required

int main(){
    int n,m;
    cin>>n>>m;   // required

    vector<string> g(n);
    int total=0;
    for(int i=0;i<n;i++){
        cin>>g[i];
        for(int j=0;j<m;j++)
            if(g[i][j]=='#') total++;
    }

    if(total<=2){
        cout<<-1;
        return 0;
    }

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(g[i][j]=='#'){
                int deg=0;
                if(i>0&&g[i-1][j]=='#') deg++;
                if(i<n-1&&g[i+1][j]=='#') deg++;
                if(j>0&&g[i][j-1]=='#') deg++;
                if(j<m-1&&g[i][j+1]=='#') deg++;
                if(deg<=1){
                    cout<<1;
                    return 0;
                }
            }

    cout<<2;
}