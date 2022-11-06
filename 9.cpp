#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

void solve(int arr[], int n) {
    int single = arr[0];
    
    for(int i=1; i<n; i++) {
        single ^= arr[i];
    }
    
    printf("%d", single);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    
    solve(arr, n);

    return 0;
}