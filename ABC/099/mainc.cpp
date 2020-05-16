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

  int dp[200000];
  rep(i, 200000) dp[i] = INF;
  dp[0] = 0;

  for(int i = 0; i < 100000; ++i){
    dp[i + 1] = min(dp[i + 1], dp[i] + 1);
  }

  int money = 6;
  while(money <= 100000){
    for(int i = 0; i < 100000; ++i){
      dp[i + money] = min(dp[i + money], dp[i] + 1);
    }
    money *= 6;
  }

  money = 9;
  while(money <= 100000){
    for(int i = 0; i < 100000; ++i){
      dp[i + money] = min(dp[i + money], dp[i] + 1);
    }
    money *= 9;
  }

  cout << dp[n] << endl;
  
  return 0;
}