#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  int k, n;
  cin >> k >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<int> a2(2*n);
  for(int i = 0; i < n; ++i){
    a2[i] = a[i];
    a2[i + n] = a[i] + k;
  }

  ll ans = 1000000;
  for(int i = 0; i < n; ++i){
    ans = min((ll)(a2[i + n - 1] - a2[i]), ans);
  }
  cout << ans << endl;
  return 0;
}
