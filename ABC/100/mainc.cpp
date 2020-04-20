#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  int ans = 0;
  rep(i, N){
    int a;
    cin >> a;
    while(1 < a && 0 == a % 2){
      a /= 2;
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
