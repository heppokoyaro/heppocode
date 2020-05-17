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
  vector<bool> ans(n, false);
  ans[0] = true;
  vector<int> num(n, 1);

  for(int i = 0; i < m; ++i){
    int x, y;
    cin >> x >> y;
    x--;
    y--;
    num[x]--;
    num[y]++;
    if(ans[x]){
      ans[y] = true;
      if(num[x] == 0){
        ans[x] = false;
      }
    }
  }

  int num_ans = 0;
  for(int i = 0; i < n; ++i){
    num_ans += ans[i];
  }

  cout << num_ans << endl;
  return 0;
}