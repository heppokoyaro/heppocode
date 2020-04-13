#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int INF = 1000000001;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int tmp = 0;
  rep(i, n) tmp += a[i];

  int count = 0;
  rep(i, n){
    if(tmp <= 4 * m * a[i]){
      count++;
    }
  }

  if(m <= count) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
