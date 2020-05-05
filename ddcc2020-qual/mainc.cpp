#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
using P = pair<int,int>;
using ll = long long;
static const int INF = 1000000000;
static const ll MOD = 1000000007;

ll gcd(ll a, ll b){return b!=0 ? gcd(b, a%b) : a;}
ll lcm(ll a, ll b){return a / gcd(a, b) * b;}

int main(){
	int h, w, k;
  cin >> h >> w >> k;
  vector<vector<char>> s(h, vector<char>(w, '0'));
  rep(i, h) rep(j, w) cin >> s[i][j];

  vector<vector<int>> ans(h, vector<int>(w, 0));
  int kcur = 0;
  for(int i = 0; i < h; ++i){
    int cur = 0;
    for(int j = 0; j < w; ++j){
      if(s[i][j] == '#'){
        kcur++;
        cur = kcur;
      }
      if(ans[i][j] == 0){
        ans[i][j] = cur;
      }
    }
  }

  for(int i = 0; i < h; ++i){
    int cur = 0;
    for(int j = w-1; j >= 0; --j){
      if(s[i][j] == '#'){
        cur = ans[i][j];
      }
      if(ans[i][j] == 0){
        ans[i][j] = cur;
      }
    }
  }

  for(int j = 0; j < w; ++j){
    int cur = 0;
    for(int i = 0; i < h; ++i){
      if(ans[i][j] != 0){
        cur = ans[i][j];
      }
      if(ans[i][j] == 0){
        ans[i][j] = cur;
      }
    }
  }

  for(int j = 0; j < w; ++j){
    int cur = 0;
    for(int i = h-1; i >= 0; --i){
      if(ans[i][j] != 0){
        cur = ans[i][j];
      }
      if(ans[i][j] == 0){
        ans[i][j] = cur;
      }
    }
  }

  for(int i = 0; i < h; ++i){
    for(int j = 0; j < w; ++j){
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
	return 0;
}

