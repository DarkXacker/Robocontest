#include <bits/stdc++.h>

using namespace std;

long mod(string s, long m) {
    long res = 0;
    
    for(int i=0; i<s.size(); i++) {
        res = (res * 10 + s[i] - '0') % m;
    }
    return res;
}

int main() {
    int t;
    long n, m = (long)(1e9+7);
    string s;
    cin >> t;
    
    for(int i=0; i<t; i++) {
        cin >> s;
        n = mod(s, m);
        printf("%ld\n", (n*n)%m);
    }
    
    return 0;
}