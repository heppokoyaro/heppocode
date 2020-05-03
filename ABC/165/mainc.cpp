#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int INF = 1000000000;
const int MOD = 1000000007;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int n, m, q;
ll ans = 0;

void dfs(vector<int>& tmp, const int n_tmp, const int pu, const vector<int>& a, const vector<int>& b, const vector<int>& c, const vector<int>& d){
  if(tmp.size() == n){
    ll point = 0;
    for(int i = 0; i < q; ++i){
      if(tmp[b[i]-1] - tmp[a[i]-1] == c[i]){
        point += d[i];
      }
    }
    ans = max(ans, point);
    return;
  }

  for(int i = pu; i <= m; ++i){
    tmp.push_back(i);
    dfs(tmp, n_tmp, i, a, b, c, d);
    tmp.pop_back();
  }
}

int main() {
  cin >> n >> m >> q;
  vector<int> a, b, c, d;
  rep(i, q){
    int a1, b1, c1, d1;
    cin >> a1 >> b1 >> c1 >> d1;
    a.push_back(a1);
    b.push_back(b1);
    c.push_back(c1);
    d.push_back(d1);
  }

  vector<int> array(1, 1);
  dfs(array, n, 1, a, b, c, d);

  cout << ans << endl;
  return 0;
}
