#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int INF = 1000000001;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  ll n;
  cin >> n;
  vector<ll> d1;
  vector<ll> d2;
  for(ll i = 1; i * i <= n; ++i){
    if(n % i == 0){
      d1.push_back(i);
      d1.push_back(n / i);
      d2.push_back(i);
      d2.push_back(n / i);
    }
  }

  reverse(d2.begin(), d2.end());
  
  int ans = 1000000;
  for(int i = 0; i < d1.size() / 2; ++i){
    string s1 = to_string(d1[i]);
    string s2 = to_string(d2[i]);
    int f = max(s1.size(), s2.size());
    ans = min(ans, f);
  }

  cout << ans << endl;
  return 0;
}
