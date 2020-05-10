#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
using P = pair<int,int>;
using ll = long long;
static const int INF = 1000000000;
static const ll MOD = 1000000007;
ll gcd(ll a, ll b){return b!=0 ? gcd(b, a%b) : a;}
ll lcm(ll a, ll b){return a / gcd(a, b) * b;}

int main(){
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n, m, x;
  cin >> n >> m >> x;
  vector<int> c(n);
  vector<vector<int>> a(n, vector<int>(m));
  rep(i, n){
    cin >> c[i];
    rep(j, m){
      cin >> a[i][j];
    }
  }

  
  int ans2 = INF;
  for(int i = 0; i < (1 << n); ++i){
    int index = i;
    int count = 0;
    int money = 0;
    vector<int> ans(m, 0);
    while(index > 0){
      if(index & 1){
        money += c[count];
        for(int j = 0; j < m; ++j){
          ans[j] += a[count][j];
        }
      }
      index >>= 1;
      count++;
    }

    // check
    bool fail = false;
    for(int j = 0; j < m; ++j){
      if(x > ans[j]){
        fail = true;
      }
    }
    if(!fail){
      ans2 = min(ans2, money);
    }
  }

  if(ans2 == INF){
    ans2 = -1;
  }
  cout << ans2 << endl;
  return 0;
}