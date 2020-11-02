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
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  sort(a.begin(), a.end());

  if(a[0] != 0){
    ll ans = 1e18;
    rep(i, n){
      ans /= a[i];
      if(ans == 0){
        cout << -1 << endl;
        return 0;
      }
    }
  }
  ll ans = 1;
  rep(i, n){
    ans *= a[i];
  }
  cout << ans << endl;

  return 0;
}