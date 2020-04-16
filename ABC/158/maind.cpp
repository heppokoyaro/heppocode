#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  string a;
  int q;
  cin >> a >> q;
  int rcount = 0;
  string tmp1 = "", tmp2 = "";
  vector<string> cs(2, "");
  string &front = cs[0];
  string &back = cs[1];
  rep(i,q){
    int t;
    cin >> t;
    if(t == 1){
      rcount++;
      auto tmp = front;
      front = back;
      back = tmp;
    }
    else{
      int f;
      string c;
      cin >> f >> c;
      if(f == 1){
        front += c;
      }
      else{
        back += c;
      }
    }
  }
  reverse(front.begin(), front.end());
  if(rcount%2){
    reverse(a.begin(), a.end());
  }
  cout << front + a + back << endl;
  return 0;
}
