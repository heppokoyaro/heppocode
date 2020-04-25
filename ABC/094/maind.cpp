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
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  sort(a.begin(), a.end(), greater<int>());
  int th = a[0] / 2;
  ll mn = a[0];
  ll ans = 0;
  for(int i = 1; i < n; ++i){
    if(mn > abs(a[i] - th)){
      mn = abs(a[i] - th);
      ans = a[i];
    }
  }

  cout << a[0] << " " << ans << endl;

  return 0;
}
