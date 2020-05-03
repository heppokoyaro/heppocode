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
  int n, k;
  cin >> n >> k;
  vector<int> d(k);
  vector<vector<int>> a(k, vector<int>());
  rep(i, k){
    cin >> d[i];
    rep(j, d[i]){
      int aa;
      cin >> aa;
      a[i].push_back(aa);
    }
  }

  map<int, int> mp;
  rep(i, k){
    rep(j, d[i]){
      mp[a[i][j]]++;
    }
  }

  cout << n - mp.size() << endl;
  return 0;
}
