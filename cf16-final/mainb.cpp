#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;

int main() {
  int n;
  cin >> n;
  vector<int> ans;

  int sum = 0;
  for(int i = 1; i <= n; ++i){
    sum += i;
    ans.push_back(i);
    if(sum >= n){
      for(auto itr : ans){
        if(sum - n != itr){
          cout << itr << endl;
        }
      }
      return 0;
    }
  }
  return 0;
}
