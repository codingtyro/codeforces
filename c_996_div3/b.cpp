#include<bits/stdc++.h>

using namespace std;

int t;

bool check(vector<int>& nums){
    int n = nums.size();
    int vis[n + 2] = {0};
    vis[nums[0]] = 1;
    for(int i = 1;i < n;i++){
        if(!(vis[nums[i] - 1] || vis[nums[i] + 1])){
            return false;
        }
        vis[nums[i]] = 1;
    }
    return true;
}
int main(){
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>nums(n);
        for(int i = 0;i < n;i++){
            cin >> nums[i];
        }
        if(check(nums)){
            puts("YES");
        }else{
            puts("NO");
        }
    }
    return 0;
}