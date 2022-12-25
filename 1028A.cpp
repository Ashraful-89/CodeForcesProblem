#include<bits/stdc++.h>

using namespace std;

int main() {
  int n , m;
  cin >> n >> m;
  char a;
  vector<pair<int,int>> v;
  for(int i = 1; i <= n; i++) {
    for(int j = 1 ; j <= m ; j++) {
        cin >> a;
        if(a == 'B') {
          v.push_back({i,j});
        }
    }
  }
  
  int size = v.size();
  cout << v[size/2].first << " " << v[size/2].second << endl;
  return 0;
}
