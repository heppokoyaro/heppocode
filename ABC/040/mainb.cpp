#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int INF = 1000000001;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  int n;
  cin >> n;

  int ans = INF;
  for(int i = 1; i*i <= n; ++i){
    int h = n / i;
    ans = min(ans, abs(h - i) + n % i);
  }
  cout << ans << endl;
  
  return 0;
}
