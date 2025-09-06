#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n,m;
 cin>>n>>m;
 multiset<int>h;
 vector<int>t(m);
 for(int i = 0; i<n ; i++){
  int x;
  cin>>x;
  h.insert(x);
 }
 for(int j = 0; j<m ; j++) cin>>t[j];
 for(int i = 0 ;  i<m ; i++){
   auto it = h.upper_bound(t[i]);
   if(it == h.begin()){
    cout<<-1<<endl;
   }
   else{
     it--;
     cout<<*it<<endl;
     h.erase(it);
   }
 }
}
