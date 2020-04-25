#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
const int INF = 1000000001;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  int n;
  cin >> n;
  map<string, int> mp;
  string prev;
  bool byes = true;
  rep(i,n){
    string s;
    cin >> s;
    mp[s]++;
    if(i != 0){
      if(prev[prev.size()-1] != s[0]){
        byes = false;
      }
    }
    if(mp[s] > 1){
      byes = false;
    }
    prev = s;
  }

  if(byes) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
