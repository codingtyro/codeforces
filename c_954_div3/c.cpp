#include<bits/stdc++.h>

using namespace std;
using ll = long long;



int tt;

int main(){
    cin >> tt;
    while(tt--){
        //input
        int n,m;
        string s,t;
        cin >> n >> m;
        cin >> s;
        vector<int>nums(m);
        for(int i = 0;i < m;i++){
            cin >> nums[i];
        }
        cin >> t;
        sort(nums.begin(),nums.end());
        sort(t.begin(),t.end());
        //slove
        unordered_map<int,char>mp;
        int j = 0;
        for(int i = 0;i < m;i++){
            if(!mp.count(nums[i])){
                mp[nums[i]] = t[j];
                j++;
            }
        }
        for(int i = 0;i < m;i++){
            s[nums[i] - 1] = mp[nums[i]];
        }
        //output
        cout << s << endl;
    }
    return 0;
}