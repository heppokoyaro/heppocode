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
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  vector<ll> sumarray(n+1, 0);
  for(int i = 0; i < n; ++i){
    sumarray[i+1] = sumarray[i] + a[i];
  }

  ll ans = 0;
  int l = 0;
  int r = 1;
  for(int l = 0; l < n+1; ++l){
    while(sumarray[r] - sumarray[l] < k){
      if(r == n+1){
        break;
      }
      ++r;
    }
    if(sumarray[r] - sumarray[l] < k) break;
    ans += n - r + 1;
  }

  cout << ans << endl;
  return 0;
}
