#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<ll,ll>;
const int INF = 1000000001;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  int n;
  cin >> n;
  vector<P> a(n);
  rep(i, n){
    cin >> a[i].first;
    a[i].second = i;
  }

  sort(a.rbegin(), a.rend());

  ll dp[n+1][n+1] = {};
  for(int i = 0; i < n; ++i){   // total
    ll atv = a[i].first;
    ll pos = a[i].second;
    for(int j = 0; j <= i; ++j){ // left
      int k = i - j;  // right
      dp[j+1][k] = max(dp[j+1][k], dp[j][k] + abs(pos - j) * atv);
      dp[j][k+1] = max(dp[j][k+1], dp[j][k] + abs(n - pos - 1 - k) * atv);
    }
  }
  
  ll ans = 0;
  for(int i = 0; i <= n; ++i){
    ans = max(ans, dp[i][n-i]);
  }

  cout << ans << endl;

  return 0;
}
