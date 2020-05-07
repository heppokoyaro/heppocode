#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
using P = pair<int,int>;
using ll = long long;
static const int INF = 1000000000;
static const ll MOD = 1000000007;
ll gcd(ll a, ll b){return b!=0 ? gcd(b, a%b) : a;}
ll lcm(ll a, ll b){return a / gcd(a, b) * b;}

std::vector<int> Eratosthenes( const int N )
{
  std::vector<bool> is_prime( N + 1, true );
  std::vector<int> P;
  for( int i = 2; i <= N; i++ ){
    if( is_prime[ i ] ){
      for( int j = 2 * i; j <= N; j += i ){
          is_prime[ j ] = false;
      }
      if( (i & 1) && is_prime[(i + 1) / 2] ){
        P.emplace_back( i );
      }
    }
  }
  return P;
}

int main(){
  int q;
  cin >> q;
  vector<int> l(q);
  vector<int> r(q);
  rep(i, q) cin >> l[i] >> r[i];

  vector<int> sieve = Eratosthenes(1e5);
  vector<int> ans;
  for(int i = 0; i < q; ++i){
    auto ritr = upper_bound(sieve.begin(), sieve.end(), r[i]);
    auto litr = lower_bound(sieve.begin(), sieve.end(), l[i]);
    ans.push_back((int)(ritr - litr));
  }
  for(auto itr : ans){
    cout << itr << endl;
  }
  return 0;
}