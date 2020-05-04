#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int INF = 1000000001;
const int MOD = 1000000007;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n){
    cin >> a[i];
  }

  vector<ll> ans(n, 0);
  for(int i = 0; i < n; ++i){
    if(i & 1){
      ans[0] -= a[i];
    }
    else{
      ans[0] += a[i];
    }
  }

  for(int i = 1; i < n; ++i){
    ans[i] = 2 * a[i - 1] - ans[i - 1];
  }

  for(int i = 0; i < n; ++i){
    cout << ans[i] << " ";
  }
  cout << endl;
  return 0;
}
