#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
using P = pair<int,int>;
using ll = long long;
static const int INF = 1000000000;
static const ll MOD = 1000000007;

ll gcd(ll a, ll b){return b!=0 ? gcd(b, a%b) : a;}
ll lcm(ll a, ll b){return a / gcd(a, b) * b;}

ll pow(ll a, ll b){
	ll ret = 1;
	while(0 < b){
		if(b % 2 == 1){
			ret = ret * a % MOD;
		}
		a = a * a % MOD;
		b >>= 1;
	}
	return ret;
}

int main(){
	ll n, k;
	cin >> n >> k;
	vector<ll> a(k+1, 0);
	for(ll i = k; 1 <= i; --i){
		a[i] = pow(k / i, n);
		int ii = 2;
		while(ii * i <= k){
			a[i] = (a[i] - a[ii * i]) % MOD;
			if(a[i] < 0) a[i] += MOD;
			ii++;
		}
	}
	
	ll ans = 0;
	for(ll i = 1; i <= k; ++i){
		ans += a[i] * i % MOD;
        ans %= MOD;
	}
	cout << ans << endl;
	return 0;
}

