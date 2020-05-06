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
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int mn = INF, mx = 0;
  rep(i, n){
    mn = min(mn, a[i]);
    mx = max(mx, a[i]);
  }

  cout << mx - mn << endl;
	return 0;
}

