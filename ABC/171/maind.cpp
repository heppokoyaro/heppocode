#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
using P = pair<int,int>;
using ll = long long;
static const int INF = 1000000000;
static const ll MOD = 1000000007;

int main(){
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n, q;
  map<int, int> mp;
  cin >> n;
  ll sum_v = 0;
  rep(i, n){
    int v;
    cin >> v;
    sum_v += v;
    mp[v]++;
  }
  cin >> q;
  vector<int> b(q), c(q);
  rep(i, q) cin >> b[i] >> c[i];

  for(int i = 0; i < q; ++i){
    int v1 = mp[b[i]];
    mp[c[i]] += v1;
    mp[b[i]] = 0;
    sum_v -= (ll)v1 * (ll)b[i];
    sum_v += (ll)v1 * (ll)c[i];
    cout << sum_v << endl;
  }

  return 0;
}