#include <iostream>

using namespace std;

const int v[6] = {1, 5, 10, 50, 100, 500};

int main() {
    int g, n[6];
    cin >> g;
    for (int & i : n) cin >> i;
    int t, r = g, ans = 0;
    for (int j = 5 ; j >= 0 ; j--) {
        t = min(r / v[j], n[j]);
        r -= v[j] * t;
        ans += t;
    }
    cout << ans;
}