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
	vector<int> w(n);
	rep(i, n) cin >> w[i];
	
	vector<int> cumsum(n + 1, 0);
	rep(i, n){
		cumsum[i+1] = cumsum[i] + w[i];
	}
	
	int ans = INF;
	for(int i = 0; i < n; ++i){
		int left = cumsum[i + 1] - cumsum[0];
		int right = cumsum[n] - cumsum[i + 1];
		ans = min(ans, abs(left - right));
	}
	
	cout << ans << endl;
	return 0;
}

