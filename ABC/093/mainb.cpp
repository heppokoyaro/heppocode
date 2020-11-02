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
  ll a, b, k;
  cin >> a >> b >> k;
  set<ll> ans;
  for(ll i = 0; i < k; ++i){
    ans.insert(min(i + a, b));
    ans.insert(max(b - i, a));
  }
  for(auto ii : ans){
    cout << ii << endl;
  }
  return 0;
}