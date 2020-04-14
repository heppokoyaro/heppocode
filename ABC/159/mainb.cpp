#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int,int>;

int main() {
  string s1;
  cin >> s1;

  int n = s1.size();
  string s2 = s1;
  reverse(s2.begin(), s2.end());
  if(s1 != s2){
    cout << "No" << endl;
    return 0;
  }
  
  s2 = s1.substr(0, (n - 1) / 2);
  string s3 = s2;
  reverse(s3.begin(), s3.end());
  if(s2 != s3){
    cout << "No" << endl;
    return 0;
  }

  s2 = s1.substr((n + 3) / 2 - 1, n - (n + 3) / 2 + 1);
  s3 = s2;
  reverse(s3.begin(), s3.end());
  if(s2 != s3){
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  return 0;
}
