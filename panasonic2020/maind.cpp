#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
using P = pair<int,int>;
using ll = long long;
static const int INF = 1000000000;
static const ll MOD = 1000000007;

int n;
void dfs(string s, char mx){
  if(s.size() == n){
    cout << s << endl;
  }
  else{
    for(char c = 'a'; c <= mx; ++c){
      dfs(s + c, (mx == c) ? (char)(mx + 1) : mx);
    }
  }
}

int main(){
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  cin >> n;
  dfs("", 'a');
  return 0;
}