#include <iostream>
#include <algorithm>
#include <math.h>
#include <vector>

using namespace std;

const int MAX = 1000000; 
vector <int> primes;  

void collectPrimes(){  
    bool marked[MAX/2 + 100] = {0}; 
    for (int i=1; i<=(sqrt(MAX)-1)/2; i++) 
        for (int j=(i*(i+1))<<1; j<=MAX/2; j=j+2*i+1) 
            marked[j] = true; 
    primes.push_back(2);  
    for (int i=1; i<=MAX/2; i++) 
        if (marked[i] == false) 
            primes.push_back(2*i + 1); 
}

int countPrimesUpToN(int n) {
    int res = 0;
    for(int i=0; i<primes.size(); i++) {
        if (primes[i] <= n) res++;
    }
    
    return res;
}

int main()
{
    collectPrimes();
    
    int n;
    cin >> n;
    
    int piN = countPrimesUpToN(n) + 1;
    
    if (piN % 2 == 0) {
        cout << "Ali";
    } else {
        cout << "Bobur";
    }
    return 0;
}