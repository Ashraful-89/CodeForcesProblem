#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n ; cin >> n;
    int a , b;
    bool fag = true;
    if(n % 2 == 0 ) {
        a = 2;
        for(int b = 2 ; b <= n ; b = b + 2){
            if( a * b > n ) { 
                cout << b <<" " << a << endl;
                fag = false;
                break;
            }
        }
    }
    else {
        a = 3;
        for(int b = 3 ; b <= n ; b = b + 3){
            if( a * b > n ) { 
                cout << b <<" " << a << endl;
                 fag = false;
                break;
            }
        }
    }
    if(fag) cout << "-1" << endl;
    return 0;
}