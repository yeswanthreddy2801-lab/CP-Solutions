#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int v[] = {100, 20,10 ,5, 1};
    long long ans = 0;

    for (int i = 0; i < 6; i++) {
        ans += n / v[i];
        n %= v[i];
    }

    cout << ans;
}