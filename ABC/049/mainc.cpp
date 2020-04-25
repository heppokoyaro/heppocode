#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int INF = 1000000001;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

string solve(string tmp, string& s){
  int n = 0;
  if(tmp == "res"){
    n = 3;
  }
  else if(tmp == "esa"){
    n = 2;
  }
  else if(tmp == "rem"){
    n = 4;
  }
  else if(tmp == "mae"){
    n = 2;
  }
  string ans = "";
  for(int i = 0; i < n; ++i){
    ans += s.back();
    s.pop_back();
  }
  return ans;
}

int main() {
  string s;
  cin >> s;
  while(!s.empty()){
    string tmp = "";
    for(int i = 0; i < 3; ++i){
      tmp += s.back();
      s.pop_back();
    }
    tmp += solve(tmp, s);
    if(tmp != "resare" && tmp != "esare" && tmp != "remaerd" && tmp != "maerd"){
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}
