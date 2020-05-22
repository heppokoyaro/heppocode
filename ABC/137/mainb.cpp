#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
using P = pair<int,int>;
using ll = long long;
static const int INF = 1000000000;
static const ll MOD = 1000000007;

int main(){
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int k, x;
  cin >> k >> x;
  int left = x - (k - 1);
  int right = x + (k - 1);
  for(int i = left; i <= right; ++i){
    cout << i << " ";
  }
  cout << endl;
  return 0;
}