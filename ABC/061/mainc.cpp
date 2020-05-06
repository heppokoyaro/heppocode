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
  ll n, k;
  cin >> n >> k;
  vector<P> tmp(n);
  rep(i, n){
    int a, b;
    cin >> a >> b;
    tmp[i] = P(a, b);
  }

  sort(tmp.begin(), tmp.end());
  for(auto itr : tmp){
    k -= itr.second;
    if(k <= 0){
      cout << itr.first << endl;
      return 0;
    }
  }
  return 0;
}

