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
  int a, b, h, m;
  cin >> a >> b >> h >> m;

  long double deg_m = m * 6;
  long double deg_h = h * 30 + m * 0.5;
  long double deg = abs(deg_m - deg_h);
  long double ans = sqrt(a * a + b * b - 2 * a * b * cos(deg * M_PI / 180));
  cout << fixed << setprecision(15) << ans << endl;
  return 0;
}