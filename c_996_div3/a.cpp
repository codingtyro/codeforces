#include<bits/stdc++.h>

using namespace std;

int t;
string s;

bool check(string t){
    if(t.size() < 3)return false;
    if(!(t[0] == '1' && t[1] == '0')){
        return false;
    }
    if(t[2] == '0' || (t[2] == '1' && t.size() == 3))return false;
    return true;
}
int main(){
    cin >> t;
    while(t--){
        cin >> s;
        if(check(s)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}