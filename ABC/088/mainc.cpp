#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int INF = 1000000001;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  vector<vector<ll>> c(3, vector<ll>(3));
  rep(i, 3) rep(j, 3) cin >> c[i][j];

  for(int i = 0; i < 2; ++i){
    int sub = 0;
    for(int j = 0; j < 3; ++j){
      if(j == 0){
        sub = c[i+1][j] - c[i][j];
      }
      else{
        if(sub != c[i+1][j] - c[i][j]){
          cout << "No" << endl;
          return 0;
        }
      }
    }
  }

  for(int j = 0; j < 2; ++j){
    int sub = 0;
    for(int i = 0; i < 3; ++i){
      if(i == 0){
        sub = c[i][j+1] - c[i][j];
      }
      else{
        if(sub != c[i][j+1] - c[i][j]){
          cout << "No" << endl;
          return 0;
        }
      }
    }
  }

  cout << "Yes" << endl;
  return 0;
}
