#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int INF = 1000000001;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  string s, t;
  cin >> s >> t;
  map<char, int> smp, tmp;
  rep(i, s.size()){
    smp[s[i]]++;
    tmp[t[i]]++;
  }
  rep(i, s.size()){
    if(smp[s[i]] != tmp[t[i]]){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
