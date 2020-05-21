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
  int N, C;
  cin >> N >> C;
  vector<int> s, t, c;
  rep(i, N){
    int tmp1, tmp2, tmp3;
    cin >> tmp1 >> tmp2 >> tmp3;
    s.emplace_back(tmp1);
    t.emplace_back(tmp2);
    c.emplace_back(tmp3);
  }

  vector<int> time(100000 + 1, 0);
  int max_t = 0;
  for(int i = 0; i < N; ++i){
    time[s[i] - 1]++;
    time[t[i]]--;
    max_t = max(max_t, t[i]);
  }

  for(int i = 0; i <= max_t; ++i){
    cout << time[i] << endl;
  }
  cout << endl;

  vector<ll> cumsum(100000 + 2, 0);
  ll ans = 0;
  for(int i = 0; i < time.size(); ++i){
    cumsum[i+1] = cumsum[i] + time[i];
    ans = max(ans, cumsum[i+1]);
  }

  cout << ans << endl;
  return 0;
}