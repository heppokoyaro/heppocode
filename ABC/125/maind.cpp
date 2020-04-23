#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int INF = 1000000001;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int abs_mn = INF;
  int minus = 0;
  rep(i, n){
    abs_mn = min(abs_mn, abs(a[i]));
    if(a[i] < 0) minus++;
  }

  ll ans = 0;
  rep(i, n){
    ans += abs(a[i]);
  }
  if(minus & 1){
    ans -= 2 * abs_mn;
  }
  cout << ans << endl;
  return 0;
}
