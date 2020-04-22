#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  string a, b;
  cin >> a >> b;
  if(a.size() > b.size()){
    cout << "GREATER" << endl;
  }
  else if(a.size() < b.size()){
    cout << "LESS" << endl;
  }
  else{
    if(a > b){
      cout << "GREATER" << endl;
    }
    else if(a < b){
      cout << "LESS" << endl;
    }
    else{
      cout << "EQUAL" << endl;
    }
  }
  return 0;
}
