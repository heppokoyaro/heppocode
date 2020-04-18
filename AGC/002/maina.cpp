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
	int a, b;
  cin >> a >> b;

  if(a > 0 && b > 0){
    cout << "Positive" << endl;
  }
  else if(a < 0 && b < 0){
    ll ans = abs(a - b) + 1;
    if(ans % 2 == 0){
      cout << "Positive" << endl;
    }
    else{
      cout << "Negative" << endl;
    }
  }
  else{
    cout << "Zero" << endl;
  }
	return 0;
}

