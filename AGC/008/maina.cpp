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
  ll x, y;
  cin >> x >> y;
  ll count = 1000000000000;
  ll count1 = (x <= y) ? y-x : -1;
  ll count2 = (-x <= y) ? y+x+1 : -1;
  ll count3 = (x <= -y) ? -y-x+1 : -1;
  ll count4 = (-x <= -y) ? -y+x+2 : -1;
  count = 0 < count1 ? count1 : count;
  count = 0 < count2 ? min(count, count2) : count;
  count = 0 < count3 ? min(count, count3) : count;
  count = 0 < count4 ? min(count, count4) : count;
  cout << count << endl;
  return 0;
}