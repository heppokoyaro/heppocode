#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  string s;
  cin >> s;
  if(s[2] == s[3] && s[4] == s[5]) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
