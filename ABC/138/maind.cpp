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
	int n, q;
  cin >> n >> q;
  vector<vector<int>> g(n, vector<int>());
  rep(i, n-1){
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  vector<ll> point(n, 0);
  rep(i, q){
    int p, x;
    cin >> p >> x;
    p--;
    point[p] += x;
  }

  vector<bool> check(n, false);
  stack<int> st;
  st.push(0);
  while(!st.empty()){
    int now = st.top();
    st.pop();
    check[now] = true;
    for(auto itr : g[now]){
      if(check[itr]) continue;
      point[itr] += point[now];
      st.push(itr);
    }
  }

  rep(i, n){
    cout << point[i] << " ";
  }
  cout << endl;
	return 0;
}

