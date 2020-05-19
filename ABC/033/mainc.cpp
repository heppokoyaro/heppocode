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
  s += "+";
  
  bool zero = false;
  int ans = 0;
  for(int i = 0; i < s.size(); ++i){
    if(s[i] == '*') continue;
    else if('0' <= s[i] && s[i] <= '9'){
      zero |= s[i] == '0';
    }
    else if(s[i] == '+'){
      if(!zero) ans++;
      zero = false;
    }
  }

  cout << ans << endl;
  return 0;
}