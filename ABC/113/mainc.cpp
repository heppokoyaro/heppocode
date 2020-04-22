#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<P>> g(n, vector<P>());
  for(int i = 0; i < m; ++i){
    int p, y;
    cin >> p >> y;
    g[p-1].push_back(P(y, i));
  }

  for(int i = 0; i < n; ++i){
    sort(g[i].begin(), g[i].end());
  }

  vector<pair<int, string>> snumber;
  for(int i = 0; i < n; ++i){
    int j = 0;
    for(auto itr : g[i]){
      char str[13] = {};
      sprintf(str, "%06d%06d", i+1, j+1);
      string s = string(str);
      snumber.push_back(pair<int, string>(itr.second, s));
      ++j;
    }
  }

  sort(snumber.begin(), snumber.end());

  for(auto itr : snumber){
    cout << itr.second << endl;
  }
  
  return 0;
}
