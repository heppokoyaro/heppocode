#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int INF = 1000000000;
const int MOD = 1000000007;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  ll n, m;
  cin >> n >> m;
  vector<ll> h(n);
  rep(i, n) cin >> h[i];
  vector<vector<int>> g(n, vector<int>());
  rep(i, m){
    int t1, t2;
    cin >> t1 >> t2;
    --t1;
    --t2;
    g[t1].push_back(t2);
    g[t2].push_back(t1);
  }

  ll ans = 0;
  for(int i = 0; i < n; ++i){
    bool high = true;
    for(auto itr : g[i]){
      if(h[i] <= h[itr]){
        high = false;
        break;
      }
    }
    if(high) ans++;
  }

  cout << ans << endl;
  return 0;
}
