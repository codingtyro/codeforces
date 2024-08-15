#include<bits/stdc++.h>

using namespace std;

int t;

bool check(string& s,vector<int>& nums){
    int m = s.size(),n = nums.size();
    if(m != n)return false;
    unordered_map<char,int>mp1;
    unordered_map<int,char>mp2;
    for(int i = 0;i < n;i++){
        if((mp1.count(s[i]) && mp1[s[i]] != nums[i]) || (mp2.count(nums[i]) && mp2[nums[i]] != s[i])){
            return false;
        }
        mp1[s[i]] = nums[i];
        mp2[nums[i]] = s[i];
    }
    return true;
}
int main(){
    cin >> t;
    while(t--){
        int n;
        //input
        cin >> n;
        vector<int>nums(n);
        string s;
        for(int i = 0;i < n;i++){
            cin >> nums[i];
        }
        int m;
        cin >> m;
        for(int i = 0; i < m;i++){

            cin >> s;

            //output
            if(check(s,nums)){
                puts("YES");
            }else{
                puts("NO");
            }
        }
    }
    return 0;
}