#include<bits/stdc++.h>

using namespace std;
using ll = long long;



int tt;

int nums[200005];
void pre(){
    nums[0] = 0;
    for(int i = 1;i < 200005;i++){
        nums[i] = nums[i / 3] + 1;
    }
}
int main(){
    pre();
    cin >> tt;
    while(tt--){
        //input
            int l,r;
            cin >> l >> r;
            int sum = 2 * nums[l];
            for(int x = l + 1;x <= r;x++){
                sum += nums[x];
            }
            cout << sum << endl;
    }
    return 0;
}