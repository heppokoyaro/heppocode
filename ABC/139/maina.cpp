#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int INF = 1000000000;
const int MOD = 1000000007;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  string s, t;
  cin >> s >> t;
  int ans  = 0;
  for(int i = 0; i < s.size(); ++i){
    if(s[i] == t[i]) ans++;
  }
  cout << ans << endl;
  return 0;
}
