#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> x(m);
  rep(i, m) cin >> x[i];

  sort(x.begin(), x.end());

  vector<int> dist;
  for(int i = 0; i < m-1; ++i){
    dist.push_back(x[i+1] - x[i]);
  }

  sort(dist.begin(), dist.end());
  
  ll ans = 0;
  for(int i = 0; i < m - n; ++i){
    ans += dist[i];
  }

  cout << ans << endl;
  return 0;
}
