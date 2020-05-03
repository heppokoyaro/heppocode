#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int,int>;
const int INF = 1000000000;
const int MOD = 1000000007;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  ull x;
  cin >> x;
  int n = 1000;
  vector<ull> a(n), b(n);
  for(ull i = 0; i < n; ++i){
    a[i] = i * i * i * i * i;
    b[i] = i * i * i * i * i;
  }

  for(int i = 0; i < n; ++i){
    for(int j = 0; j < n; ++j){
      if(a[i] - b[j] == x){
        cout << i << " " << j << endl;
        return 0;
      }
      else if (a[i] + b[j] == x){
        cout << i << " " << -j << endl;
        return 0;
      }
    }
  }
  return 0;
}
