#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int INF = 1000000001;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  int h, w;
  cin >> h >> w;
  vector<vector<int>> white(h, vector<int>(w, 0));
  vector<vector<int>> black(h, vector<int>(w, 0));
  rep(i, h) rep(j, w){
    int c;
    cin >> c;
    if((i + j) & 1){
      white[i][j] = c;
    }
    else{
      black[i][j] = c;
    }
  }

  vector<vector<int>> white_i(h+1, vector<int>(w+1, 0));
  vector<vector<int>> black_i(h+1, vector<int>(w+1, 0));

  for(int i = 1; i < h + 1; ++i){
    for(int j = 1; j < w + 1; ++j){
      white_i[i][j] = white_i[i-1][j] + white_i[i][j-1] + white[i-1][j-1] - white_i[i-1][j-1];
      black_i[i][j] = black_i[i-1][j] + black_i[i][j-1] + black[i-1][j-1] - black_i[i-1][j-1];
    }
  }

  int ans = 0;
  for(int li = 0; li < h; ++li){
    for(int lj = 0; lj < w; ++lj){
      for(int ri = li+1; ri < h + 1; ++ri){
        for(int rj = lj+1; rj < w + 1; ++rj){
          int w_sum = white_i[ri][rj] - white_i[ri][lj] - white_i[li][rj] + white_i[li][lj];
          int b_sum = black_i[ri][rj] - black_i[ri][lj] - black_i[li][rj] + black_i[li][lj];
          if(w_sum == b_sum){
            int area = (ri - li) * (rj - lj);
            ans = max(ans, area);
          }
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}
