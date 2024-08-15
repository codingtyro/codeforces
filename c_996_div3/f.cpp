#include<bits/stdc++.h>

using namespace std;
using ll = long long;



int tt;

int main(){
    cin >> tt;
    while(tt--){
        //input
        int n,k;
        cin >> n >> k;
        const int inf = (int)1e9;
        vector<int> dp(k + 1,inf);
        dp[0] = 0;
        //slove
        while(n--){
            int a,b;
            cin >> a >> b;
            vector<int>me(k + 1,inf);
            me[0] = 0;
            int cnt = 0,cost = 0;
            while(cnt < k && (a > 0 || b > 0)){
                if(a < b)swap(a,b);
                cnt += 1;
                cost += b;
                a -= 1;
                me[cnt] = cost;
            }
            for(int i = k - 1;i >= 0;i--){
                for(int j = 1;j <= k - i;j++){
                    dp[i + j] = min(dp[i + j],dp[i] + me[j]);
                }
            }
        }
        //output
        cout << (dp[k] == inf ? -1 : dp[k]) << endl;
    }
    return 0;
}