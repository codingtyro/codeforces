#include<bits/stdc++.h>

using namespace std;
using ll = long long;



int tt;

int main(){
    cin >> tt;
    while(tt--){
        //input
        int x0,x1,x2;
        cin >> x0 >> x1 >> x2;
        int t1 = abs(x0 - x1) + abs(x0 - x2);
        int t2 = abs(x1 - x0) + abs(x1 - x2);
        int t3 = abs(x2 - x0) + abs(x2 - x1);
        //slove

        //output
        cout << min({t1,t2,t3}) << endl;
    }
    return 0;
}