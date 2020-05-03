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
  int k;
  int a, b;
  cin >> k >> a >> b;

  for(int i = a; i <= b; ++i){
    if(i % k == 0){
      cout << "OK" << endl;
      return 0;
    }
  }
  cout << "NG" << endl;
  return 0;
}
