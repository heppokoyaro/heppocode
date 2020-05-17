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
  int n, m;
  cin >> n >> m;
  vector<int> disk(m);
  rep(i, m) cin >> disk[i];

  vector<int> ans(n+1);
  rep(i, n+1){
    ans[i] = i;
  }
  
  for(int i = 0; i < m; ++i){
    int index = 0;
    for(int j = 0; j < ans.size(); ++j){
      if(ans[j] == disk[i]) index = j;
    }
    swap(ans[0], ans[index]);
  }

  for(int i = 1; i < n+1; ++i){
    cout << ans[i] << endl;
  }
  return 0;
}