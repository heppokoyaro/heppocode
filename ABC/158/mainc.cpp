#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int a, b;
  cin >> a >> b;
  for(int i = 0; i < 1010; ++i){
    double A = floor((double)i * 0.08);
    double B = floor((double)i * 0.1);
    if((int)A == a && (int)B == b){
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}
