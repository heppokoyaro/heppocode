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
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  ll n, k;
  cin >> n >> k;
  vector<int> a(n);
  rep(i, n){
    cin >> a[i];
    a[i]--;
  }

  vector<int> count(n, 0);
  int next = a[0];
  int pre = a[0];
  int start = 0;
  ll t = n;
  bool tmp = false;
  for(int i = 1; i <= n; ++i){
    if(count[next] == 0){
      count[next] = i;
    }
    else{
      t = i - count[next];
      start = pre;
      if(k <= count[next] - 1){
        tmp = true;
      }
      else{
        k -= count[next] - 1;
      }
      break;
    }
    pre = next;
    next = a[next];
  }

  if(!tmp)
  {
    k %= t;
    next = start;
    for(int i = 0; i < k; ++i){
      next = a[next];
    }
  }
  else{
    next = a[0];
    for(int i = 0; i < k - 1; ++i){
      next = a[next];
    }
  }

  cout << (next + 1) << endl;
  return 0;
}