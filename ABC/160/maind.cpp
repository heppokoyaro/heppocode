#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int INF = 1000000001;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  int n, x, y;
  cin >> n >> x >> y;
  x--;
  y--;

  vector<vector<int>> mp(n, vector<int>());
  for(int i = 0; i < n; ++i){
    if(i+1 < n) mp[i].push_back(i+1);
    if(0 <= i-1) mp[i].push_back(i-1);
  }
  mp[x].push_back(y);
  mp[y].push_back(x);

  vector<int> ans(n, 0);
  for(int i = 0; i < n; ++i){
    vector<int> dist(n, -1);
    dist[i] = 0;
    queue<int> q;
    q.push(i);
    while(!q.empty()){
      int now = q.front();
      q.pop();
      for(auto next : mp[now]){
        if(dist[next] != -1) continue;
        dist[next] = dist[now] + 1;
        q.push(next);
      }
    }

    for(int j = i; j < n; ++j){
      ans[dist[j]]++;
    }
  }

  for(int i = 1; i < n; ++i){
    cout << ans[i] << endl;
  }
  return 0;
}
