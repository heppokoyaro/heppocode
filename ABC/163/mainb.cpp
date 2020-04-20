#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int INF = 1000000001;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  rep(i, m) cin >> a[i];

  int ans = 0;
  rep(i, m){
    ans += a[i];
  }

  if(n < ans){
    cout << -1 << endl;
  }
  else{
    cout << n - ans << endl;
  }

  return 0;
}
