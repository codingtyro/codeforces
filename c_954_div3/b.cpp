#include<bits/stdc++.h>

using namespace std;
using ll = long long;



int tt;

int main(){
    cin >> tt;
    while(tt--){
        //input
        int n,m;
        cin >> n >> m;
        int nums[n][m];
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                cin >> nums[i][j];
            }
        }

        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                int t = -1;
                bool ok = true;
                if(i - 1 >= 0){
                    if(nums[i][j] > nums[i - 1][j]){
                        t = max(nums[i - 1][j],t);
                    }else ok = false;
                }
                if(i + 1 < n){
                    if(nums[i][j] > nums[i + 1][j]){
                        t = max(nums[i + 1][j],t);
                    }else ok = false;
                }
                if(j - 1 >= 0){
                    if(nums[i][j] > nums[i][j - 1]){
                        t = max(nums[i][j - 1],t);
                    }else ok = false;
                }
                if(j + 1 < m){
                    if(nums[i][j] > nums[i][j + 1]){
                        t = max(nums[i][j + 1],t);
                    }else ok = false;
                }
                if(ok)nums[i][j] = t;
            }
        }

        //slove

        //output
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                cout << nums[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}