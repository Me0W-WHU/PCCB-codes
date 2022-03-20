#include <iostream>
#include <algorithm>
#define MAX 100
using namespace std;

int dp[MAX];    // do it with an array instead of a matrix
int v[MAX];
int w[MAX];
int N, W;

int main() {
    cin >> N;
    for (int i = 0 ; i < N ; i++) cin >> w[i] >> v[i];
    cin >> W;
    memset(dp, 0 , sizeof(dp));
    for (int i = 0 ; i < N ; i++) {
        for (int j = 0 ; j <= W ; j++) {
            if (w[i] > j) dp[j] = dp[j];
            else dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }
    for (int j = 0 ; j <= W ; j++) cout << dp[j] << " ";
    cout << endl << dp[W];
    return 0;
}
