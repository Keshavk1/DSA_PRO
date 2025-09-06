#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,x;
  cin>>n>>x;
  vector<int>g(n);
  for(int i=0;  i<n ; i++){
    cin>>g[i];
  }
  int cnt = 0;
  sort(g.begin(),g.end());
  int i = 0,j = n-1;
  while(i<=j){
   if(g[i] + g[j] <= x){
    i++;
    j--;
   }
   else{
    j--;
   }
   cnt++;
  }
  cout<<cnt<<endl;
}
