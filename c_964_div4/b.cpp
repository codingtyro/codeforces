#include<bits/stdc++.h>

using namespace std;
using ll = long long;



int tt;

int main(){
    cin >> tt;
    while(tt--){
        //input
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        //slove
        int x = ((a > c) - (a < c) + (b > d) - (b < d)) > 0;
        int y = ((a > d) - (a < d) + (b > c) - (b < c)) > 0;
        //output
        cout << (x + y) * 2 << endl;
    }
    return 0;
}