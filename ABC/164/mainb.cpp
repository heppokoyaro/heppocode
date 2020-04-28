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
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  int i = 0;
  while(a > 0 && c > 0){
    if(i & 1){
      a -= d;
    }
    else{
      c -= b;
    }
    ++i;
  }

  if(a <= 0){
    cout << "No" << endl;
  }
  else{
    cout << "Yes" << endl;
  }
  return 0;
}
