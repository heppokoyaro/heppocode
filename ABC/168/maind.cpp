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
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n, vector<int>());
  for(int i = 0; i < m; ++i){
    int a, b;
    cin >> a >> b;
    a--, b--;
    g[a].emplace_back(b);
    g[b].emplace_back(a);
  }

  vector<P> dist(n, P(INF, 0)); // dist, num
  queue<int> q;
  dist[0] = P(0, 0);
  q.push(0);
  while(!q.empty()){
    int cur = q.front();
    q.pop();
    for(auto itr : g[cur]){
      if(dist[itr].first != INF) continue;
      dist[itr].first = dist[cur].first + 1;
      dist[itr].second = cur + 1;
      q.push(itr);
    }
  }

  cout << "Yes" << endl;
  for(int i = 1; i < n; ++i){
    cout << dist[i].second << endl;
  }
  return 0;
}