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
  ll n, m;
  cin >> n >> m;
  map<ll, ll, greater<ll>> a;
  rep(i, n){
    ll tmp;
    cin >> tmp;
    a[tmp]++;
  }
  rep(i, m){
    int b, c;
    cin >> b >> c;
    a[c] += b;
  }

  ll ans = 0;
  for(auto itr : a){
    if(n < itr.second){
      ans += n * itr.first;
    }
    else{
      ans += itr.second * itr.first;
    }
    n -= itr.second;
    if(n <= 0){
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
