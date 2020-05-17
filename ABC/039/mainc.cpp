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
  string s;
  cin >> s;
  s += s;
  string key[] = {"Mi", "Fa", "Fa", "So", "So", "La", "La", "Si", "Do", "Do", "Re", "Re", "Mi"};
  for(int i = 0; i < s.size() - 7; ++i){
    string sub_s = s.substr(i, 7);
    if(sub_s == "WWBWBWB"){
      cout << key[12 - i % 12] << endl;
      return 0;
    }
  }
  return 0;
}