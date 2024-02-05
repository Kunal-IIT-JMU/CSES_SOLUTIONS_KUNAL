#include <bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin >> n;
    long sum = (n*(n+1))/2;
    long s = 0;

    for(int i =0; i<n-1; i++){
        long l;
        cin >> l;
        s = s + l;
    }

    cout << sum -s;
    return 0;
}