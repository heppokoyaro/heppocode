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

  ll ans = 0;
  for(int i = 1; i <= n; ++i){
    if(i % 3 != 0 && i % 5 != 0){
      ans += i;
    }
  }
  cout << ans << endl;
  return 0;
}
