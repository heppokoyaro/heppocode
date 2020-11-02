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
  int n;
  cin >> n;
  int t, a;
  cin >> t >> a;
  vector<int> h(n, 0);
  rep(i, n) cin >> h[i];
  
  int diff = INF;
  int index = 0;
  for(int i = 0; i < n; ++i){
    int ans = abs((1000 * t - h[i] * 6) - 1000 * a);
    if(ans < diff){
      diff = ans;
      index = i + 1;
    }
  }
  cout << index << endl;
  return 0;
}