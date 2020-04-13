#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}


const int INF = 1000000000;
int main() {
  int x, y, a, b, c;
  cin >> x >> y >> a >> b >> c;
  vector<int> p(a), q(b), r(c);
  rep(i, a) cin >> p[i];
  rep(i, b) cin >> q[i];
  rep(i, c) cin >> r[i];

  sort(p.begin(), p.end(), greater<int>());
  sort(q.begin(), q.end(), greater<int>());
  sort(r.begin(), r.end(), greater<int>());

  int tmp_x = x - 1;
  int tmp_y = y - 1;
  for(int i = 0; i < r.size(); ++i){
    if(r[i] < p[tmp_x] && r[i] < q[tmp_y]) break;
    if(p[tmp_x] < q[tmp_y]){
      if(0 <= tmp_x){
        p[tmp_x] = max(p[tmp_x], r[i]);
        tmp_x--;
      }
      else if(0 <= tmp_y){
        q[tmp_y] = max(q[tmp_y], r[i]);
        tmp_y--;
      }
    }
    else if(p[tmp_x] > q[tmp_y]){
      if(0 <= tmp_y){
        q[tmp_y] = max(q[tmp_y], r[i]);
        tmp_y--;
      }
      else if(0 <= tmp_x){
        p[tmp_x] = max(p[tmp_x], r[i]);
        tmp_x--;
      }
    }
    else{
      if(tmp_x < tmp_y){
        q[tmp_y] = max(q[tmp_y], r[i]);
        tmp_y--;
      }
      else{
        p[tmp_x] = max(p[tmp_x], r[i]);
        tmp_x--;
      }
    }
  }

  ll ans = 0;
  for(int i = 0; i < x; ++i){
    ans += p[i];
  }
  for(int i = 0; i < y; ++i){
    ans += q[i];
  }
  cout << ans << endl;
  return 0;
}
