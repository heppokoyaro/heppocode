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
  map<int, int> mp;
  rep(i, n){
    int a;
    cin >> a;
    mp[a]++;
  }

  for(int i = n-1; i >= 0; i -= 2){
    if(i != 0 && mp[i] == 2) continue;
    if(i == 0 && mp[i] == 1) continue;
    cout << 0 << endl;
    return 0;
  }

  ll ans = 1;
  for(int i = 0; i < n / 2; ++i){
    ans *= 2;
    ans %= MOD;
  }

  cout << ans << endl;
  return 0;
}
