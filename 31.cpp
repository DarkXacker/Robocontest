#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int x, y, n;
    cin >> t;

    while (t--)
    {
        cin >> x >> y >> n;
        int gcd = __gcd(x, y);
        printf("%s\n", (n < max(x, y) && n % gcd == 0) ? "YES" : "NO");
    }

    return 0;
}