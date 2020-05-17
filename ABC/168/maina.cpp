#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
using P = pair<int,int>;
using ll = long long;
static const int INF = 1000000000;
static const ll MOD = 1000000007;

int main(){
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n;
  cin >> n;
  n %= 10;
  if(n == 2 || n == 4 || n == 5 || n == 7 || n == 9){
    cout << "hon" << endl;
  }
  else if(n == 0 || n == 1 || n == 6 || n == 8){
    cout << "pon" << endl;
  }
  else if(n == 3){
    cout << "bon" << endl;
  }
  return 0;
}