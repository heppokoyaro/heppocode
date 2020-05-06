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

  vector<int> color(9, 0);
  int wild = 0;
  rep(i, n){
    if(a[i] < 3200) color[a[i] / 400]++;
    else wild++;
  }

  int cn = 0;
  rep(i, 8){
    if(color[i]) cn++;
  }

  int mn;
  mn = max(1, cn);

  int mx;
  mx = cn + wild;

  cout << mn << " " << mx << endl;

	return 0;
}

