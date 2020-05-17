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
  int w, h, n;
  cin >> w >> h >> n;

  int left = 0, right = w, bottom = 0, top = h;
  for(int i = 0; i < n; ++i){
    int x, y, a;
    cin >> x >> y >> a;
    if(a == 1){
      left = max(left, x);
    }
    else if(a == 2){
      right = min(right, x);
    }
    else if(a == 3){
      bottom = max(bottom, y);
    }
    else{
      top = min(top, y);
    }
  }

  if(bottom < top && left < right){
    cout << (right - left) * (top - bottom) << endl;
  }
  else{
    cout << 0 << endl;
  }
  return 0;
}