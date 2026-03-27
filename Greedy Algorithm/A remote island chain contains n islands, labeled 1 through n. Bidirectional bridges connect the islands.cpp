#include<iostream>
using namespace std;
int N;
int a[200010], b[200010];
int main()
{
 int i, j;
 cin>>N;
 for(i=0;i<N-1;i++)
 {
 cin>>a[i];
 if(a[i]==0) i--;
 }

 for(i=0;i<N-1;i++)
 {
 scanf("%d",&b[i]);
 if(b[i]==0) i--;
 if(b[i]==a[0]) j=i;
 }
 for(i=0;i<N-1;i++,j++)
 {
 if(a[i]!=b[j%(N-1)])
 {
 printf("NO\n");
 return 0;}
 }
 printf("YES\n");
 return 0;
 cout<<"cin>>n;cin>>b[i];";
}