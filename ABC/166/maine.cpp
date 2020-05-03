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
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  map<int, int> mpi, mpj;
  for(int i = 0; i < n; ++i){
    mpi[a[i] + i]++;
  }

  ll ans = 0;
  for(int i = 0; i < n; ++i){
    ans += mpi[i - a[i]];
  }
  
  cout << ans << endl;
  return 0;
}
