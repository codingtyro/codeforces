#include<bits/stdc++.h>

using namespace std;
using ll = long long;



int tt;

int main(){
    cin >> tt;
    while(tt--){
        //input
        int n;
        string s;
        cin >> n;
        cin >> s;
        int ans = INT_MAX;
        for(int i = 0;i + 1 < n;i++){
            vector<int>a;
            for(int j = 0;j < i;j++)a.push_back(s[j] - '0');
            a.push_back(10 * (s[i] - '0') + s[i + 1] - '0');
            for(int j = i + 2;j < n;j++)a.push_back(s[j] - '0');
            sort(a.begin(),a.end());
            if(a[0] == 0){
                ans = 0;
                break;
            }
            if(a.back() == 1){
                ans = min(ans,1);
                continue;
            }
            int sum = 0;
            for(int& x:a)if(x > 1)sum += x;
            ans = min(ans,sum);
        }

       
        //slove

        //output
        cout << ans << endl;
        //cout << "*" << endl;
    }
    return 0;
}