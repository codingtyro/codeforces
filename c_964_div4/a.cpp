#include<bits/stdc++.h>

using namespace std;
using ll = long long;



int tt;

int main(){
    cin >> tt;
    while(tt--){
        //input
        string s;
        cin >> s;
        //slove
        int sum = s[0] - '0' + s[1] - '0';
        //output
        cout << sum << endl;
    }
    return 0;
}