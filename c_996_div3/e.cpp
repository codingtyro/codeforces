#include<bits/stdc++.h>

using namespace std;
using ll = long long;


int tt;

int main(){
    cin >> tt;
    while(tt--){
        //input
        int n,m,k;
        cin >> n >> m >> k;
        int w;
        cin >> w;
        vector<int>nums(w);
        for(int i = 0;i < w;i++)cin >> nums[i];
        vector<int>hh;
        hh.reserve(n * m);
        //slove
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                int i1 = max(0,i - k + 1);
                int j1 = max(0,j - k + 1);
                int i2 = min(i,n - k);
                int j2 = min(j,m - k);
                hh.push_back((i2 - i1 + 1) * (j2 - j1 + 1));
            }
        }
        sort(nums.rbegin(),nums.rend());
        sort(hh.rbegin(),hh.rend());
        ll sum = 0;
        for(int i = 0;i < w;i++){
            sum += (ll)nums[i] * hh[i];
        }
        //output
        cout << sum << endl;
    }
    return 0;
}