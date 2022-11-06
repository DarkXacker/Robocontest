#include <bits/stdc++.h>

using namespace std;


int main() {
    int t;
    int x1,y1,x2,y2;
    
    cin >> t;
    
    for(int i=0; i<t; i++) {
        cin>>x1>>y1>>x2>>y2;
        
        cout<<(x2+x2-x1) << " " << (y2+y2-y1) << endl;
    }
    
    return 0;
}