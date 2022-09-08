#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if( s[0] >= 'a' && s[0] <= 'z' )
    {
        s[0] = toupper(s[0]);

    }
    // for(int i = 0 ; i <= s.length();i++){
    //     cout << s[i] ;
    // }
    cout << s << endl;
    return 0;
}