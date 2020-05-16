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
  string s;
  cin >> s;

  int num_a = 0;
  ll ans = 0;
  for(int i = 0; i < s.size() - 1; ++i){
    if(s[i] == 'A'){
      num_a++;
    }
    else if(s[i] == 'B' && s[i+1] == 'C'){
      ans += num_a;
      ++i;
    }
    else{
      num_a = 0;
    }
  }
  cout << ans << endl;
  return 0;
}