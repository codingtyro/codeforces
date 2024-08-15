#include<bits/stdc++.h>

using namespace std;
using ll = long long;



int tt;

int main(){
    cin >> tt;
    while(tt--){
        //input
        string s,t;
        cin >> s;
        cin >> t;
        bool ok = true;
        int n = s.size(),m = t.size();
        int i = 0,j = 0;
        for(;i < n && j < m;i++){
            if(s[i] == t[j]){
                j++;
            }else{
                if(s[i] == '?'){
                    s[i] = t[j];
                    j++;
                }
            }
        }
        if(j == m){
            for(;i < n;i++)if(s[i] == '?')s[i] = 'a';
            puts("YES");
            cout << s << endl;
        }else{
            puts("NO");
        }
        //slove

        //output
    }
    return 0;
}