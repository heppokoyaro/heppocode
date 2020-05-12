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
	int n, m;
	cin >> n >> m;
	vector<int> a(m);
	rep(i, m) cin >> a[i];
	
	int dp[n + 10] = {};
	dp[0] = 1;
	
	for(int i = 0; i < m; ++i){
		dp[a[i]] = -1;
	}
	
	for(int i = 0; i <= n; ++i){
		if(dp[i] == -1) continue;
		if(dp[i+1] != -1){
			dp[i+1] += dp[i] % MOD;
			dp[i+1] %= MOD;
		}
		if(dp[i+2] != -1){
			dp[i+2] += dp[i] % MOD;
			dp[i+2] %= MOD;
		}
	}
	
	cout << dp[n] << endl;
	return 0;
}

