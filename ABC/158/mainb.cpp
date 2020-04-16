#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  uint64_t n, a, b;
  cin >> n >> a >> b;
  uint64_t tmp1 = n / (a + b);
  uint64_t tmp2 = n % (a + b);
  tmp2 = min(tmp2, a);
  cout << tmp1 * a + tmp2 << endl;
  return 0;
}
