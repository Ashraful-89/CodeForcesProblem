#include <iostream>
using namespace std;

int main() 
{
  int t;
  cin >> t;
  while(t--) {
    int n ;
  cin >> n;
  if(n % 2 != 0) {
    for(int i = 0 ; i < n; i++){
      cout << '1' << " ";
    }
    cout << endl;
  }
  else {
    cout << "1 3 ";
    for(int i = 2; i < n; i++) {
      cout << '2' << " ";
    }
    cout << endl;
  }
  }
  
    return 0;
}
