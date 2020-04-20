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
  map<int, int> a;
  rep(i, n-1){
    int tmp;
    cin >> tmp;
    a[tmp]++;
  }

  for(int i = 0; i < n; ++i){
    size_t tmp = a.count(i+1);
    if(tmp > 0){
      cout << a[i+1] << endl;
    }
    else{
      cout << 0 << endl;
    }
  }



  return 0;
}
