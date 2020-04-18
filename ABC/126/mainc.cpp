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

  vector<ll> denominator(n, 0);
  for(int i = 1; i <= n; ++i){
    if(i < k){
      int tmp = 2;
      while(i*tmp < k){
        tmp <<= 1;
      }
      denominator[i-1] = n * tmp;
    }
    else{
      denominator[i-1] = n;
    }
  }

  ll lcm_denomi = 1;
  for(int i = 0; i < n; ++i){
    lcm_denomi = lcm(lcm_denomi, denominator[i]);
  }

  ll numerator = 0;
  for(int i = 0; i < n; ++i){
    numerator += lcm_denomi / denominator[i];
  }

  // cout << numerator << " " << lcm_denomi << endl;
  long double ans = (long double)numerator / (long double)lcm_denomi;
  cout << fixed << setprecision(15) << ans << endl;

	return 0;
}

