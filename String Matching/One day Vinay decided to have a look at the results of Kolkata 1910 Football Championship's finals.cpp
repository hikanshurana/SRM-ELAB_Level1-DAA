#include<iostream>
using namespace std;
int main(){
int n,c=0;string a,b;
cin>>n;
while(n--){
cin>>b;
if(!c)a=b;
if(b==a)c++;
else c--;
}
cout<<a;
}