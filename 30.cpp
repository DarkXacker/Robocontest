#include <bits/stdc++.h>

using namespace std;

int mod(string s, int n)
{
    int r = 0;
    for (int i = 0; i < s.size(); i++)
    {
        r = (10 * r + (s[i] - '0')) % n;
    }

    return r;
}

vector<string> nums;

void gen()
{
    queue<string> q;
    q.push("9");

    for (int i = 0; i < 10000; i++)
    {
        string s = q.front();
        q.pop();
        nums.push_back(s);
        q.push(s + '0');
        q.push(s + '9');
    }
}

string find(int n)
{
    for (int i = 0; i < nums.size(); i++)
    {
        if (mod(nums[i], n) == 0)
            return nums[i];
    }

    return "";
}

int main()
{
    gen();

    int t, n;
    cin >> t;

    while (t)
    {
        cin >> n;
        printf("%s\n", find(n).c_str());
        t--;
    }

    return 0;
}