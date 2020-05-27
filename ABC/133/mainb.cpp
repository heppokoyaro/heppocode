#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
using P = pair<int,int>;
using ll = long long;
static const int INF = 1000000000;
static const ll MOD = 1000000007;

int main(){
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n, d;
  cin >> n >> d;
  vector<vector<int>> x(n, vector<int>(d));
  rep(i, n) rep(j, d) cin >> x[i][j];

  int ans = 0;
  for(int i = 0; i < n; ++i){
    for(int j = i + 1; j < n; ++j){
      int dist = 0;
      for(int k = 0; k < d; ++k){
        dist += (x[i][k] - x[j][k]) * (x[i][k] - x[j][k]);
      }
      for(int k = 0; k <= dist; ++k){
        if(k * k == dist){
          ans++;
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}