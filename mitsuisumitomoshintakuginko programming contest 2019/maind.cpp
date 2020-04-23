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
  string s;
  cin >> n >> s;

  int ans = 0;
  for(int i = 0; i < 1000; ++i){
    char find_c[4];
    sprintf(find_c, "%03d", i);
    int count = 0;
    for(int j = 0; j < n; ++j){
      if(s[j] == find_c[count]){
        count++;
        if(count == 3){
          ans++;
          break;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}
