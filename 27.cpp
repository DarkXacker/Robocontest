#include <bits/stdc++.h>

using namespace std;

int solve(int n, int k) {
    vector<int> r;
    
    // 0 1 2 3 4
    // 4 3 2 1 0
    // 4 0 1 2 3
    // 4 0 3 2 1
    // 4 0 3 1 2
    int start_point = n;
    
    while(start_point > n/2) {
        r.push_back(start_point-1);
        r.push_back(n-start_point);
        start_point--;
    }
    
    auto it = find(r.begin(), r.end(), k);
    if (it != r.end()) {
        return it-r.begin();
    }
    
    return -1;
}

int main() {
    int t;
    int n, k;
    
    cin >> t;
    for(int i=0; i<t; i++) {
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }
    
    return 0;
}