#include <bits/stdc++.h>

using namespace std;

long powmod(long a, long n, long m) {
  if (n == 0) return 1;
  if (a == 0) return 0;
  
  long res = 1;
  while(n) {
    if(n&1) {
      res = (res%m * a%m)%m;
    }
    a=(a%m*a%m)%m;
    n >>= 1;
  }
  
  return res;
}

int main() {
  int n, k;
  
  cin >> n >> k;
  if (n == 0) cout << 1;
  else cout << powmod(k+1, n, 1000000007);
  return 0;
}