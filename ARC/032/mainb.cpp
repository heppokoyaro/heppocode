#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); ++i)
using P = pair<int,int>;
using ll = long long;
static const int INF = 1000000000;
static const ll MOD = 1000000007;

struct UnionFind {
  vector<int> par; // par[i]:iの親の番号　(例) par[3] = 2 : 3の親が2

  UnionFind(int N) : par(N) { //最初は全てが根であるとして初期化
      for(int i = 0; i < N; i++) par[i] = i;
  }

  int root(int x) { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
      if (par[x] == x) return x;
      return par[x] = root(par[x]);
  }

  void unite(int x, int y) { // xとyの木を併合
      int rx = root(x); //xの根をrx
      int ry = root(y); //yの根をry
      if (rx == ry) return; //xとyの根が同じ(=同じ木にある)時はそのまま
      par[rx] = ry; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
  }

  bool same(int x, int y) { // 2つのデータx, yが属する木が同じならtrueを返す
      int rx = root(x);
      int ry = root(y);
      return rx == ry;
  }
};

int main(){
  cin.tie(nullptr);
  ios_base::sync_with_stdio(false);
  int n, m;
  cin >> n >> m;
  UnionFind uf(n);
  for(int i = 0; i < m; ++i){
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    uf.unite(a, b);
  }

  set<int> st;
  for(int i = 0; i < n; ++i){
    st.insert(uf.root(i));
  }

  cout << st.size() - 1 << endl;
  return 0;
}