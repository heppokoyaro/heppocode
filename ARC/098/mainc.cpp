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
  string s;
  cin >> n >> s;
  int west = 0, east = 0;
  for(int i = 0; i < n; ++i){
    if(s[i] == 'E') east++;
  }

  int ans = n;
  for(int i = 0; i < n; ++i){
    if(s[i] == 'E') east--;
    ans = min(ans, east + west);
    if(s[i] == 'W') west++;
  }

  cout << ans << endl;
  return 0;
}