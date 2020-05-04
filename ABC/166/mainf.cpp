#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int,int>;
const int INF = 1000000000;
const int MOD = 1000000007;

ll gcd(ll a, ll b) { return b?gcd(b,a%b):a;}
ll lcm(ll a, ll b) { return a/gcd(a,b)*b;}

int main() {
  int n, a, b, c;
  cin >> n >> a >> b >> c;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  if(a + b + c == 0){
    cout << "No" << endl;
    return 0;
  }

  vector<string> ans(n);
  rep(i, n){
    if("AB" == s[i]){
      if(a == 0 && b == 0){
        cout << "No" << endl;
        return 0;
      }
      else if(a == 0 || b == 0){
        if(a > b){
          a--;
          b++;
          ans[i] = "B";
        }
        else{
          a++;
          b--;
          ans[i] = "A";
        }
      }
      else{
        if(i != n-1){
          if(s[i+1] == "AC"){
            a++;
            b--;
            ans[i] = "A";
          }
          else if(s[i+1] == "BC"){
            b++;
            a--;
            ans[i] = "B";
          }
          else{
            if(a > b){
              a--;
              b++;
              ans[i] = "B";
            }
            else{
              b--;
              a++;
              ans[i] = "A";
            }
          }
        }
        else{
          if(a > b){
            a--;
            b++;
            ans[i] = "B";
          }
          else{
            b--;
            a++;
            ans[i] = "A";
          }
        }
      }
    }
    else if("AC" == s[i]){
      if(a == 0 && c == 0){
        cout << "No" << endl;
        return 0;
      }
      else if(a == 0 || c == 0){
        if(a > c){
          a--;
          c++;
          ans[i] = "C";
        }
        else{
          a++;
          c--;
          ans[i] = "A";
        }
      }
      else{
        if(i != n-1){
          if(s[i+1] == "AB"){
            a++;
            c--;
            ans[i] = "A";
          }
          else if(s[i+1] == "BC"){
            c++;
            a--;
            ans[i] = "C";
          }
          else{
            if(a > c){
              a--;
              c++;
              ans[i] = "C";
            }
            else{
              c--;
              a++;
              ans[i] = "A";
            }
          }
        }
        else{
          if(a > c){
            a--;
            c++;
            ans[i] = "C";
          }
          else{
            c--;
            a++;
            ans[i] = "A";
          }
        }
      }
    }
    else{
      if(b == 0 && c == 0){
        cout << "No" << endl;
        return 0;
      }
      else if(b == 0 || c == 0){
        if(b > c){
          b--;
          c++;
          ans[i] = "C";
        }
        else{
          b++;
          c--;
          ans[i] = "B";
        }
      }
      else{
        if(i != n-1){
          if(s[i+1] == "AB"){
            b++;
            c--;
            ans[i] = "B";
          }
          else if(s[i+1] == "AC"){
            c++;
            b--;
            ans[i] = "C";
          }
          else{
            if(b > c){
              b--;
              c++;
              ans[i] = "C";
            }
            else{
              c--;
              b++;
              ans[i] = "B";
            }
          }
        }
        else{
          if(b > c){
            b--;
            c++;
            ans[i] = "C";
          }
          else{
            c--;
            b++;
            ans[i] = "B";
          }
        }
      }
    }
  }

  cout << "Yes" << endl;
  rep(i, n){
    cout << ans[i] << endl;
  }
  return 0;
}
