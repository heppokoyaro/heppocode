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
  ll n;
  cin >> n;
  string ans = "";
  while(n > 0){
    int amari = n % 26;
    if(amari == 0) ans += 'z', n--;
    else ans += (char)amari - 1 + 'a';
    n /= 26;
  }
  reverse(ans.begin(), ans.end());
  cout << ans << endl;
  return 0;
}