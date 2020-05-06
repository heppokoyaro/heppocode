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
	int n, k;
  cin >> n >> k;

  ll tmp = n / k;
  ll ans = tmp * tmp * tmp;
  if(k % 2 == 0){
    ll tmp2 = n % k;
    if(tmp2 >= k / 2){
      tmp++;
    }
    ans += tmp * tmp * tmp;
  }

  cout << ans << endl;

	return 0;
}

