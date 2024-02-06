#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;

    cin >> s;
    int count =1;
    int ans = 1;
    for(int i =0; i< s.length(); i++){
        if(s[i] == s[i+1]){
            count++;
            if(count >= ans)
                ans = count;
        }
        else{
            count = 1;
        }
    }
    cout << ans;
    return 0;
}