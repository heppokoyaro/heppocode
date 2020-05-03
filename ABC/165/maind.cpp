#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int INF = 1000000000;
const int MOD = 1000000007;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  ll a, b, n;
  cin >> a >> b >> n;

  if(b == 1){
    cout << 0 << endl;
    return 0;
  }

  ll x;
  if(n < b){
    x = n;
  }
  else{
    x = n / b * b - 1;
  }
  cout << (a * x) / b - (x / b) * a << endl;
  return 0;
}
