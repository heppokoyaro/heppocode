#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int INF = 1000000001;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  int k;
  cin >> k;

  ll ans = 0;
  for(ll i = 1; i <= k; ++i){
    for(ll j = 1; j <= k; ++j){
      for(ll l = 1; l <= k; ++l){
        ll tmp = gcd(i, j);
        ans += gcd(tmp, l);
      }
    }
  }

  cout << ans << endl;
  return 0;
}
