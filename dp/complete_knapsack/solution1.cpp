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
            int maxv = 0;
            for (int k = 0 ; k <= j / w[i] ; k++) maxv = max(maxv, dp[i][j - k *  w[i]] + k * v[i]);
            dp[i + 1][j] = maxv;
        }
    }
//    for (int i = 0 ; i <= N ; i++) {
//        for (int j = 0 ; j <= W ; j++) cout << dp[i][j] << " ";
//        cout << endl;
//    }
    cout << dp[N][W];
    return 0;
}
