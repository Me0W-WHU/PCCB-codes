#include <iostream>
#define MAX_NUM 100
#define MAX_VAL 100
using namespace std;

int s[MAX_NUM];
int n;
int dp[MAX_VAL];

int main() {
    cin >> n;
    for (int i = 0 ; i < n ; i++) cin >> s[i];
    memset(dp, 0, sizeof(dp));
    for (int i = 0 ; i < n ; i++) {
        int max_l = 0;
        // among those who precedes s[i], try to find the longest subsequence to which s[i] could append
        for (int j = 0 ; j < i ; j++) {
            if (s[j] < s[i] && dp[j] > max_l) max_l = dp[j];
        }
        dp[i] = max_l + 1;
    }
    int ans = 0;
    for (int i = 0 ; i < n ; i++) {
        if (dp[i] > ans) ans = dp[i];
    }
    cout << ans;
    return 0;
}