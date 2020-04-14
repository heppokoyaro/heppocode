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
  vector<int> r(n);
  rep(i, n) cin >> r[i];

  int ans1 = n;
  bool check = true;
  rep(i, n-1){
    if( (check && r[i] < r[i+1]) || (!check && r[i] > r[i+1]) ){
      check = !check;
    }
    else{
      ans1--;
    }
  }

  int ans2 = n;
  check = true;
  rep(i, n-1){
    if( (check && r[i] > r[i+1]) || (!check && r[i] < r[i+1]) ){
      check = !check;
    }
    else{
      ans2--;
    }
  }

  int ans = max(ans1, ans2);
  if(ans < 3) cout << 0 << endl;
  else cout << ans << endl;

  return 0;
}
