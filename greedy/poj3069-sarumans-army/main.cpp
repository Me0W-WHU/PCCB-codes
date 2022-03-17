#include <iostream>
#include <algorithm>
#define MAX_TROOP 1000
using namespace std;
int r = 0, n = 0, i = 0, j = 0, ans = 0, p[MAX_TROOP];

int main() {
    while(cin >> r >> n) {
        if (r == -1 && n == -1) break;
        ans = 0;
        for (i = 0 ; i < n ; i++) cin >> p[i];
        sort(p, p + n);
        i = 0, j = 0;
        while (i < n) {
            //j - 1 is the furthest point to the right that can illuminate i
            while (j < n && p[j] <= p[i] + r) j++;
            ans++;
            while (i < n && p[i] <= p[j - 1] + r) i++;
        }
        cout << ans << endl;
    }
    return 0;
}