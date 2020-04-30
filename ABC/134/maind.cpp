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
	int n;
  cin >> n;
  vector<int> a(n+1, 0);
  rep(i, n) cin >> a[i+1];

  vector<int> ans(n+1, 0);
  int ball = 0;
  for(int i = n; i >= 1; --i){
    if(i * 2 > n){
      ans[i] = a[i];
      ball += a[i];
    }
    else{
      int index = i;
      while(index <= n){
        ans[i] += ans[index];
        index += i;
      }
      if(a[i] != (ans[i] & 1)){
        ans[i] = 1;
        ball++;
      }
      else{
        ans[i] = 0;
      }
    }
  }

  cout << ball << endl;
  for(int i = 1; i <= n; ++i){
    if(ans[i]){
      cout << i << " ";
    }
  }
  cout << endl;
	return 0;
}

