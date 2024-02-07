#include <bits/stdc++.h>

using namespace std;

long long mod = 1e9 + 7;    //creating the variable to prevent the overflow

long long fastpow2(int x){

    long long ans =  1;
    long long a = 2;

    while(x > 0){
        if(x&1)             //only for odd values this section of code will run 
            ans = (ans*a) % mod;
        a = (a*a) % mod;    //changing the value of a
        x >>= 1;            //dividing it with 2
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    cout << fastpow2(n) << endl;
    return 0;
}