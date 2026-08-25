#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int m = stoi(n)+1;

    while (true)
    {
        vector<int> vis(10, 0);
        int x = m;
        bool valid = true;

        while (x != 0)
        {
            int digit = x % 10;

            if (vis[digit])
            {
                valid = false;
                break;
            }

            vis[digit] = 1;
            x /= 10;
        }

        if (valid)
        {
            cout << m;
            break;
        }
        m++;
    }

    return 0;
}