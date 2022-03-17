#include <iostream>
#include <algorithm>
#define MAX_WORK 100

using namespace std;

int n, s[MAX_WORK], t[MAX_WORK];
pair<int, int> w[MAX_WORK];
int last = 0, ans = 0;

int main() {
    cin >> n;
    int i;
    for (i = 0 ; i < n ; i++) cin >> s[i];
    for (i = 0 ; i < n ; i++) cin >> t[i];
    for (i = 0 ; i < n ; i++) {
        w[i].second = s[i];
        w[i].first = t[i];
    }
    sort(w, w+n);
    for (i = 0 ; i < n ; i++) {
        if (w[i].second > last) {
            ans++;
            last = w[i].first;
        }
    }

    cout << ans;
    return 0;
}
