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
  ll x;
  cin >> x;

  ll ans = 0;
  ll money = 100;
  while(money < x){
    ans++;
    money += money / 100;
  }

  cout << ans << endl;
  return 0;
}
