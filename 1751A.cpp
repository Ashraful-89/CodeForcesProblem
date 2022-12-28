// Joey Takes Money

#include <iostream>
using namespace std;
 
int main() 
{
    int t; cin >> t;
    while(t--) {
      long long int  n;
      cin >> n;
      long long int  a[n];
      for(long long int  i = 0 ; i < n ;i++) cin >> a[i];
      long long int fact = 1;
      for(long long int i = 0; i < n; i++) {
        fact = fact * a[i];
      }
      fact = fact + (n - 1);
      fact = fact * 2022;
      cout << fact << endl;
      
    }
    return 0;
}
