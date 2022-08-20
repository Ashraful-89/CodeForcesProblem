#include<bits/stdc++.h>
using namespace std ;
int main(void) {
    int n ; cin >> n;
    long long  a[n];
    for( int i = 0 ; i < n ; i++) cin >> a[i];

    for(int i = 0 ; i < n ; i++){
        if(a[i] % 2 == 0)  cout << (a[i] - 1) << " ";
        else cout << a[i] << " ";
    }
    return 0;
}