#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int t;


int main(){
    cin >> t;
    while(t--){
       int n;
       cin >> n;
       vector<int>nums(n);
       for(int i = 0;i < n;i++){
            cin >> nums[i];
       } 
       string s;
       cin >> s;
       //需要维护一个前缀和
       ll sum = 0;
       vector<ll>pre(n + 1,0);
       for(int i = 1;i <= n;i++){
            pre[i] += pre[i - 1] + nums[i - 1];
       }
       int l = 0,r = n - 1;
       while(l < r){
        if(s[l] == 'L' && s[r] == 'R'){
            sum += pre[r + 1] - pre[l];
            l++;
            r--;
        }else if(s[l] != 'L')l++;
        else if(s[r] != 'R')r--;
       }
       cout << sum << endl;
    }
    return 0;
}