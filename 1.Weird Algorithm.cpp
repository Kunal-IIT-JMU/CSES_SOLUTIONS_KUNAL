#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    cout << n << " ";
    
    //loop till the value of n gets n
    while(n != 1){
        if(n%2==0){
            n = n/2;
        }
        else{
            n = n*3;
            n = n + 1;
        }
        cout << n << " ";
    }

    return 0;
}