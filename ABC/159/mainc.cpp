#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int,int>;

int main() {
  long double L;
  cin >> L;
  long double ans = pow(L / 3, 3);
  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}
