#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
using P = pair<int,int>;
using ll = long long;
using ull = unsigned long long;
static const int INF = 1000000000;
static const ll MOD = 1000000007;

int main(){
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<ull> a(n);
  rep(i, n) cin >> a[i];
  ull all_xor = 0;
  for(int i = 0; i < n; ++i){
    all_xor ^= a[i];
  }
  for(int i = 0; i < n; ++i){
    cout << (all_xor ^ a[i]) << " ";
  }
  cout << endl;
  return 0;
}