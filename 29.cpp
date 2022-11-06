#include <bits/stdc++.h>

using namespace std;

int count(int n)
{
    if (n & 1)
        return 0;

    int r = 0;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i % 2 == 0)
                r++;
            if ((n / i) % 2 == 0)
                r++;
            if (i * i == n)
                r--;
        }
    }

    return r;
}

int main()
{
    int t, n;
    cin >> t;

    while (t)
    {
        cin >> n;
        cout << count(n) << endl;
        t--;
    }

    return 0;
}