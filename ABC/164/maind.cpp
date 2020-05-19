#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
using P = pair<int,int>;
using ll = long long;
static const int INF = 1000000000;

int main(){
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  string s;
  cin >> s;
  reverse(s.begin(), s.end());
  vector<int> digit_mod(s.size());
  int mult_digit = 1;
  for(int i = 0; i < s.size(); ++i){
    int digit = s[i] - '0';
    digit *= mult_digit;
    digit_mod[i] = digit % 2019;
    mult_digit *= 10;
    mult_digit %= 2019;
  }

  vector<int> cumsum(s.size()+1, 0);
  for(int i = 0; i < s.size(); ++i){
    cumsum[i + 1] = (cumsum[i] + digit_mod[i]) % 2019;
  }

  map<int, int> mp;
  for(int i = 0; i < cumsum.size(); ++i){
    mp[cumsum[i]]++;
  }

  ll ans = 0;
  for(auto itr : mp){
    ans += itr.second * (itr.second - 1) / 2;
  }

  cout << ans << endl;
  return 0;
}