#include <bits/stdc++.h>
using namespace std;

int main()
{
 ios::sync_with_stdio(false);
 cin.tie(nullptr);
 int n;
 cin >> n;
 vector<int> arr(n);
 set<int> st;
 for (int i = 0; i < n; i++)
 {
  cin >> arr[i];
  st.insert(arr[i]);
 }
 cout << st.size() << endl;
}
