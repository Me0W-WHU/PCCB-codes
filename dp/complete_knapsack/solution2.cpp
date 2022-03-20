#include <iostream>
#include <algorithm>
#define MAX 100
using namespace std;

int dp[MAX][MAX];
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
            if (w[i] > j) dp[i + 1][j] = dp[i][j];
            else dp[i + 1][j] = max(dp[i][j], dp[i + 1][j - w[i]] + v[i]);  //this is all the difference between 01 knapsack & complete knapsack
        }
    }
    for (int i = 0 ; i <= N ; i++) {
        for (int j = 0 ; j <= W ; j++) cout << dp[i][j] << " ";
        cout << endl;
    }
    cout << dp[N][W];
    return 0;
}
