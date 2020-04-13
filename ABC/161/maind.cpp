#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int INF = 1000000001;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  int k;
  cin >> k;

  queue<ll> q;
  rep(i, 9){
    q.push(i+1);
  }

  ll x = 0;
  for(int i = 0; i < k; ++i){
    x = q.front();
    q.pop();
    ll tmp = x % 10;
    for(ll j = -1; j <= 1; ++j){
      if(tmp == 0 && j == -1) continue;
      if(tmp == 9 && j == 1) continue;
      ll xx = x*10 + j + tmp;
      q.push(xx);
    }
  }
  cout << x << endl;
  return 0;
}
