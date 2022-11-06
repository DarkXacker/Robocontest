#include <bits/stdc++.h>

using namespace std;

long geometric_progression(long k, long n, long m) {
  long res = 0, t = 1, e = k%m;
  
  while(n) {
    if (n&1) res = (e*res+t)%m;
    t = ((e+1)*t)%m;
    e = (e*e)%m;
    n >>=1;
  }
  
  return res;
}

int main() {
  long n, k, m = (long)(1e9+7);
  
  cin >> n >> k;
  
  cout << geometric_progression(k, n, m);
  
  return 0;
}