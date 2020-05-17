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
  for(int i = 0; i < s.size(); ++i){
    char c = s[i];
    if(c == 'O'){
      c = '0';
    }
    else if(c == 'D'){
      c = '0';
    }
    else if(c == 'I'){
      c = '1';
    }
    else if(c == 'Z'){
      c = '2';
    }
    else if(c == 'S'){
      c = '5';
    }
    else if(c == 'B'){
      c = '8';
    }
    cout << c;
  }
  cout << endl;
  return 0;
}