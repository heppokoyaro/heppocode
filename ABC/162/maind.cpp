#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int INF = 1000000001;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  int n;
  string s;
  cin >> n >> s;

  vector<ll> c(3, 0);
  for(int i = 0; i < n; ++i){
    if(s[i] == 'R') c[0]++;
    if(s[i] == 'G') c[1]++;
    if(s[i] == 'B') c[2]++;
  }

  ll rgb = 0;
  for(int i = 1; i <= 1999; ++i){
    for(int j = 0; j+2*i < n; ++j){
      if(s[j] == 'R' && s[j+i] == 'G' && s[j+2*i] == 'B') rgb++;
      if(s[j] == 'R' && s[j+i] == 'B' && s[j+2*i] == 'G') rgb++;
      if(s[j] == 'B' && s[j+i] == 'R' && s[j+2*i] == 'G') rgb++;
      if(s[j] == 'B' && s[j+i] == 'G' && s[j+2*i] == 'R') rgb++;
      if(s[j] == 'G' && s[j+i] == 'R' && s[j+2*i] == 'B') rgb++;
      if(s[j] == 'G' && s[j+i] == 'B' && s[j+2*i] == 'R') rgb++;
    }
  }

  ll ans = c[0] * c[1] * c[2] - rgb;
  cout << ans << endl;
  return 0;
}
