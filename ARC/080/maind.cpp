#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int INF = 1000000001;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  int h, w, n;
  cin >> h >> w >> n;
  vector<int> a(n);
  for(int i = 0; i < n; ++i){
    cin >> a[i];
  }

  vector<vector<int>> g(h, vector<int>(w, 0));
  int index = 0;
  for(int i = 0; i < n; ++i){
    int limit = index + a[i];
    for(; index < limit; ++index){
      g[index / w][index % w] = i + 1;
    }
  }
  
  for(int i = 0; i < h; ++i){
    if(i & 1){
      reverse(g[i].begin(), g[i].end());
    }
  }

  for(int i = 0; i < h; ++i){
    for(int j = 0; j < w; ++j){
      cout << g[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
