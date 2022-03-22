#include <iostream>
#define MAX_NUM 100
#define MAX_VAL 100
#define INF 0x7f7f7f7f
using namespace std;

int s[MAX_NUM];
int n;
int dp[MAX_VAL];    //dp[i] stands for the minimum ending number for a i-numbers-long subsequence

int main() {
    cin >> n;
    for (int i = 0 ; i < n ; i++) cin >> s[i];
    fill(dp, dp + n + 1, INF);
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < n ; j++) {
            if (j == 0 || s[i] > dp[j]) dp[j + 1] = min(dp[j + 1], s[i]);
        }
        for (int k = 0 ; k < n ; k++) cout << dp[k] << " ";
        cout << endl;
    }
    for (int i = n ; i >= 0 ; i--) {
        if (dp[i] < INF) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}