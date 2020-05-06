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

  vector<int> push(n, 0);
  int ans = 0;
  int cur = 0;
  while(cur != 1){
    if(push[cur] == 0){
      push[cur] = 1;
      cur = a[cur] - 1;
      ans++;
    }
    else{
      cout << -1 << endl;
      return 0;
    }
  }

  cout << ans << endl;
  return 0;
}

