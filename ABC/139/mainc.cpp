#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
using P = pair<int,int>;
using ll = long long;
static const int INF = 1000000000;
static const ll MOD = 1000000007;

ll gcd(ll a, ll b){return b!=0 ? gcd(b, a%b) : a;}
ll lcm(ll a, ll b){return a / gcd(a, b) * b;}

int main(){
	int n;
  cin >> n;
  vector<int> h(n);
  rep(i, n) cin >> h[i];

  ll ans = 0;
  ll tmp  = 0;
  for(int i = 0; i < n-1; ++i){
    if(h[i] >= h[i+1]){
      tmp++;
    }
    else{
      tmp = 0;
    }
    ans = max(ans, tmp);
  }

  cout << ans << endl;
  return 0;
}