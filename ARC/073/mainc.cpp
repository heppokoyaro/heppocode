#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int INF = 1000000001;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  ll n, t;
  cin >> n >> t;
  vector<ll> ta(n);
  rep(i, n) cin >> ta[i];

  ll ans = 0;
  for(int i = 0; i < n-1; ++i){
    ans += min(t, ta[i + 1] - ta[i]);
  }
  ans += t;
  cout << ans << endl;
  return 0;
}
