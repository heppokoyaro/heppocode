#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
using P = pair<int,int>;
using ll = long long;
static const int INF = 1000000000;
static const ll MOD = 1000000007;

ll gcd(ll a, ll b){return b!=0 ? gcd(b, a%b) : a;}
ll lcm(ll a, ll b){return a / gcd(a, b) * b;}

int main(){
	string s;
  cin >> s;

  int ans = 0;
  for(int i = 0; i < s.size() - 1; ++i){
    if(s[i] == s[i+1]){
      s[i+1] = (s[i] == '0') ? '1' : '0';
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}

