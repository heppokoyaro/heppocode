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

  while(0 < n){
    int digit = n % 10;
    if(digit == 7){
      cout << "Yes" << endl;
      return 0;
    }
    n /= 10;
  }
  cout << "No" << endl;
  return 0;
}
