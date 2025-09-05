#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, m, k;
 cin >> n >> m >> k;
 vector<int> req(n);
 vector<int> arr(m);
 for (int i = 0; i < n; i++)
 {
  cin >> req[i];
 }
 for (int i = 0; i < m; i++)
 {
  cin >> arr[i];
 }
 sort(req.begin(), req.end());
 sort(arr.begin(), arr.end());
 int l = 0, r = 0;
 int cnt = 0;
 cout << endl;
 while (r < n && l < m)
 {
  if (abs(req[r] - arr[l]) <= k)
  {
   cnt++;
   r++;
   l++;
  }
  else if (arr[l] < req[r] - k)
  {
   l++;
  }
  else
  {
   r++;
  }
 }
 cout << cnt << "\n";
}