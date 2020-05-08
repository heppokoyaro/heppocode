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
  int n;
  cin >> n;
  vector<P> ab(n);
  rep(i, n){
    int a, b;
    cin >> a >> b;
    ab[i] = P(b, a);
  }
  sort(ab.begin(), ab.end());
  vector<ll> cumsum(n+1, 0);
  rep(i, n){
    cumsum[i+1] = cumsum[i] + ab[i].second;
  }

  rep(i, n){
    if(ab[i].first < cumsum[i+1]){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}