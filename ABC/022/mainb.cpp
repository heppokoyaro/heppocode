#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  map<int, int> mp;
  rep(i, n){
    mp[a[i]]++;
  }

  ll ans = 0;
  for(auto itr : mp){
    ans += itr.second - 1;
  }

  cout << ans << endl;
  return 0;
}
