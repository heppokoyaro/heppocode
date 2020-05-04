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

  map<int, ll> mp;
  for(int i = 0; i < n; ++i){
    int tmp = n - i;
    for(int i = 2; i <= tmp; ++i){
      while(tmp % i == 0){
        tmp /= i;
        mp[i]++;
      }
    }
  }

  ll ans = 1;
  for(auto itr : mp){
    ans *= (itr.second + 1) % MOD;
    ans %= MOD;
  }

  cout << ans << endl;
  return 0;
}
