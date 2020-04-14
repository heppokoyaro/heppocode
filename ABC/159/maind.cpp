#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int,int>;

int main() {
  int N;
  cin >> N;
  map<int, ll> mp;
  vector<int> a(N);
  rep(i, N){
    cin >> a[i];
    mp[a[i]]++;
  }

  ll total = 0;
  for(auto itr : mp){
    total += itr.second * (itr.second - 1) / 2;
  }

  for(int i = 0; i < N; ++i){
    ll ans = total;
    ll count = mp[a[i]];
    ans -= count * (count - 1) / 2;
    count--;
    ans += count * (count - 1) / 2;
    cout << ans << endl;
  }
  return 0;
}
