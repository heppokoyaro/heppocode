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
  map<int,int> mp;
  for(int i = 0; i < n; ++i){
    int k;
    cin >> k;
    for(int j = 0; j < k; ++j){
      int a;
      cin >> a;
      mp[a]++;
    }
  }

  int ans = 0;
  for(auto itr : mp){
    if(itr.second == n){
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}

