#include <bits/stdc++.h>

using namespace std;

long wonder_number(int n) {
    long res, curr = 1;
    
    while(n) {
        long sum = 0;
        res = curr;
        while(res) {
            sum += res%10;
            res/=10;
        }
        if (curr % (sum*sum) == 0) n--;
        curr++;
    }
    
    return curr-1;
}

int main() {
	int n;
	
	cin >> n;
	
	cout << wonder_number(n);
	return 0;
}