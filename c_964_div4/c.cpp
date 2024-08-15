#include<bits/stdc++.h>

using namespace std;
using ll = long long;



int tt;

int main(){
    cin >> tt;
    while(tt--){
        //input
        int n,s,m;
        cin >> n >> s >> m;
        vector<pair<int,int>>nums(n);
        for(int i = 0 ;i < n;i++){
            cin >> nums[i].first >> nums[i].second;
        }
        sort(nums.begin(),nums.end());
        int start = 0;
        int mx = 0;
        for(int i = 0;i < n;i++){
            mx = max(mx,nums[i].first - start);
            start = nums[i].second;
        }
        mx = max(mx,m - start);
        //slove

        //output
        if(mx >= s)puts("YES");
        else puts("NO");
    }
    return 0;
}